from langchain_huggingface import ChatHuggingFace,HuggingFaceEndpoint
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from dotenv import load_dotenv
load_dotenv()
parser = StrOutputParser()
llm = HuggingFaceEndpoint(
    repo_id='HuggingFaceH4/zephyr-7b-beta',
    task='text-genration',
    temperature=0.2
)

model = ChatHuggingFace(llm = llm)
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
    template="Give the mvp player among that them at that time of world cup \n {name}",
    input_variables=["name"]
)


chain = prompt1 | model | parser | prompt2 | model | parser | prompt3 | model | parser

result = chain.invoke({"topic" : "cricket"})
print(result)
chain.get_graph().print_ascii()