from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from dotenv import load_dotenv
from langchain_core.runnables import RunnableSequence,RunnablePassthrough,RunnableParallel,RunnableLambda
from langchain_google_genai import ChatGoogleGenerativeAI

import os
import re
import string

load_dotenv()

API_KEY = os.getenv("GOOGLE_API_KEY")

model = ChatGoogleGenerativeAI(
    model="gemini-2.5-flash",
    google_api_key=API_KEY
)
parser = StrOutputParser()


def counter(text):
    count = len(text.split())
    return count

def preprocess(text):
    text = text.lower()
    text = text.translate(str.maketrans('', '', string.punctuation))
    text = re.sub(r'\d+', '', text)
    text = re.sub(r'\s+', ' ', text).strip()
    return text


prompt1 = PromptTemplate(
    template='Genrate a small para( 4line ) of lastest news about the {topic}',
    input_variables=['topic']
)

chain1 = RunnableSequence(prompt1,model,parser)

chain2 = chain1 | RunnableLambda(preprocess)

chain3 = RunnableSequence(chain1,chain2)

chain4 = RunnableSequence(chain3,RunnableLambda(counter))

final_chain = RunnableParallel({
    'orifinal_text' : RunnablePassthrough(),
    'count' : RunnableLambda(counter),
    'prepro_text' : chain2,
    'prepro_count' : chain4
})


result = final_chain.invoke({'topic' : 'AI'})

print(result)


