from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from dotenv import load_dotenv
from langchain_core.runnables import RunnableSequence,RunnablePassthrough,RunnableParallel
from langchain_google_genai import ChatGoogleGenerativeAI
import os

load_dotenv()

API_KEY = os.getenv("GOOGLE_API_KEY")

model = ChatGoogleGenerativeAI(
    model="gemini-2.5-flash",
    google_api_key=API_KEY
)
parser = StrOutputParser()

prompt1 = PromptTemplate(
    template='Give me on joke about the {topic}',
    input_variables=['topic']
)

propmt2 = PromptTemplate(
    template='Give the explaination of that joke {text}',
    input_variables=['text']
)

chain1 = RunnableSequence(prompt1,model,parser)


parallel_chain = RunnableParallel({
    'joke' : RunnablePassthrough(),
    'explaination' : RunnableSequence(propmt2,model,parser)
})


final_chain = RunnableSequence(chain1 ,parallel_chain)

result = final_chain.invoke({'topic' : 'AI'})

print(result['joke'])

print("\n" + '='*30 + '\n')

print(result['explaination'])