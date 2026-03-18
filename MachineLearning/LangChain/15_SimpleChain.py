from langchain_huggingface import ChatHuggingFace , HuggingFaceEndpoint
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from dotenv import load_dotenv

load_dotenv()
parser = StrOutputParser()

llm = HuggingFaceEndpoint(
    repo_id='HuggingFaceH4/zephyr-7b-beta',
    task='text-generation',
    max_new_tokens=200,
    temperature=0.2
)
model = ChatHuggingFace(llm=llm)

prompt = PromptTemplate(
    template="Who is the owner or founder of {name} and also when was it started",
    input_variables=["name"]
)

chain = prompt | model | parser

result = chain.invoke({'name': "Spotfiy"})
print(result)
chain.get_graph().print_ascii()
# result = model.invoke("who is the prime minister of india")
# print(result.content)