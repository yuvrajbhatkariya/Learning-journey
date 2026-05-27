# from langchain_huggingface import ChatHuggingFace , HuggingFaceEndpoint
from langchain_ollama import ChatOllama
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from dotenv import load_dotenv

load_dotenv()
parser = StrOutputParser()

llm = ChatOllama(
    model="qwen2.5-coder:7b",
    temperature=0.2
)


prompt = PromptTemplate(
    template="Who is the owner or founder of {name} and also when was it started",
    input_variables=["name"]
)

chain = prompt | llm | parser

result = chain.invoke({'name': "Spotfiy"})
print(result)
chain.get_graph().print_ascii()
# result = model.invoke("who is the prime minister of india")
# print(result.content)