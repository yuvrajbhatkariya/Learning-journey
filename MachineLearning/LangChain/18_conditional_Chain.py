from langchain_ollama import ChatOllama
from dotenv import load_dotenv
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from langchain_core.runnables import RunnableBranch,RunnableLambda
from langchain_core.output_parsers import PydanticOutputParser
from pydantic import BaseModel ,Field
from typing import Literal
from langchain_google_genai import ChatGoogleGenerativeAI
import os

load_dotenv()

parser = StrOutputParser()

class Feedback(BaseModel):
    sentiment : Literal['positive',"negative"] = Field(description='Give the sentiment of feedback')


parser2 = PydanticOutputParser(pydantic_object=Feedback)


model1 = ChatGoogleGenerativeAI(
    model="gemini-2.5-flash",
    temperature=0.5,
    # max_output_tokens=200,
    google_api_key=os.getenv("GOOGLE_API_KEY")
)

Prompt1 = PromptTemplate(
    template = "Classify the given sentiment as positive or negative .\n {Feedback} \n {format_instruction}",
    input_variables = ['Feedback'],
    partial_variables = {'format_instruction' : parser2.get_format_instructions()}
)

Prompt2 = PromptTemplate(
    template="Give reply for positive feedback \n {feedback}",
    input_variables=['feedback']
)

Prompt3 = PromptTemplate(
    template="Give reply to user for their negative feedback \n {feedback}",
    input_variables=['feedback']
)

branch_chain = RunnableBranch(
    (lambda x:x.sentiment == 'positive',Prompt2|model1 | parser),
    (lambda x:x.sentiment == 'negative',Prompt3|model1 |parser),
    RunnableLambda(lambda x:"Neutral sentiment")
)

classifier_chain = Prompt1 | model1 | parser2

chain = classifier_chain | branch_chain

print(chain.invoke({"Feedback" : "this is a terrible smartwatch "}))

chain.get_graph().print_ascii()