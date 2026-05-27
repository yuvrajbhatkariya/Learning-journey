from langchain_ollama import ChatOllama
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from dotenv import load_dotenv
load_dotenv()
parser = StrOutputParser()


model = ChatOllama(
    model="qwen2.5-coder:7b",
    temperature=0.2
)

# result = model.invoke("What is yout name ?")
# print(result.content)

prompt1 = PromptTemplate(
    template = "Which team won the world cup in 2011 ?{topic}",
    input_variables=["topic"]
)

prompt2 = PromptTemplate(
    template="Give names of all the player which played at that time in this team \n {team} ?",
    input_variables=["team"]
)

prompt3 = PromptTemplate(
    template="Give the mvp of that team in finals. \n {list}",
    input_variables=["list"]
)


chain = prompt1 | model | parser | prompt2 | model | parser | prompt3 | model | parser

result = chain.invoke({"topic" : "cricket"})
print(result)
chain.get_graph().print_ascii()