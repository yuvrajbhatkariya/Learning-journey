from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from dotenv import load_dotenv
from langchain_core.runnables import RunnableSequence,RunnablePassthrough,RunnableParallel,RunnableLambda,RunnableBranch
from langchain_google_genai import ChatGoogleGenerativeAI

import os
parser = StrOutputParser()

load_dotenv()

API_KEY = os.getenv("GOOGLE_API_KEY")

model = ChatGoogleGenerativeAI(
    model="gemini-2.5-flash",
    google_api_key=API_KEY
)

prompt1 = PromptTemplate(
    template='Write a detail report about the {topic}',
    input_variables=['topic']
)

prompt2 = PromptTemplate(
    template='Sumarise the given text - {text}',
    input_variables=['text']
)

chain1 = RunnableSequence(prompt1,model,parser)

chain2 = RunnableBranch(
    (lambda x : len(x.split())>300,RunnableSequence(prompt2,model,parser)),
    RunnablePassthrough()
)

result = RunnableSequence(chain1,chain2)

print(result.invoke({'topic' : 'Indian corrupt politics'}))

