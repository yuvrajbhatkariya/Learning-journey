from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from dotenv import load_dotenv
from langchain_core.runnables import RunnableSequence,RunnableParallel
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
    template="Give the headline of todays news about the {topic}",
    input_variables=['topic']
)
prompt2 = PromptTemplate(
    template="generate a post for linkedien about that  \n {topic}",
    input_variables=['topic']
)

parallel_chain = RunnableParallel({
    'headline' : RunnableSequence(prompt1,model,parser),
    'linkdein' : RunnableSequence(prompt2,model,parser)
})


print(parallel_chain.invoke({'topic' : 'AI'}))

