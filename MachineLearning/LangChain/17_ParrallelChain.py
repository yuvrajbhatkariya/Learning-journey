from langchain_huggingface import ChatHuggingFace,HuggingFaceEndpoint
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from dotenv import load_dotenv
from langchain_ollama import ChatOllama
from langchain_core.runnables import RunnableParallel  
load_dotenv()
parser = StrOutputParser()

with open("data.text","r",encoding="utf-8") as file :
    text = file.read()


llm = HuggingFaceEndpoint(
    repo_id='HuggingFaceH4/zephyr-7b-beta',
    task='text-genration',
    temperature=0.2
)
model1 = ChatHuggingFace(llm = llm)

model2 = ChatOllama(
    model="qwen2.5-coder:7b",
    temperature=0.5
)

# print(text)
# result = model2.invoke("Who are you ?")
# print(result.content)

prompt1 = PromptTemplate(
    template="Give the 10 line summary of given text which contain all the important points and formula \n {text}",
    input_variables=["text"]
)
prompt2 = PromptTemplate(
    template="Give all the refrence paper used in that give text. \n {text}",
    input_variables=["text"]
)

prompt3 = PromptTemplate(
    template="Merge two things one by one  {summary}, {refrence}",
    input_variables=["summary","refrence"]
)

paralle_chain = RunnableParallel({
    "summary" : prompt1 | model1 | parser,
    "refrence" : prompt2 | model2 | parser
})

merge_chain = prompt3 | model1 | parser
final_chain = paralle_chain | merge_chain

# result = final_chain.invoke({"text": text})
# print(result)

final_chain.get_graph().print_ascii()