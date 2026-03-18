from langchain_huggingface import ChatHuggingFace ,HuggingFaceEndpoint
from langchain_core.prompts import PromptTemplate,load_prompt
import streamlit as st
from dotenv import load_dotenv
import requests
import json

load_dotenv()

st.header("Research Summarizer")

# url = "http://localhost:11434/api/generate"
# payload = {
#     "model": "mistral",
#     "prompt": user_imput,
#     "stream": False
# }

llm = HuggingFaceEndpoint(
    repo_id='HuggingFaceH4/zephyr-7b-beta',
    task='text-generation',
    max_new_tokens=200,
    temperature=0.2
)
model = ChatHuggingFace(llm=llm)


paper_input = st.selectbox( "Select Research Paper Name",["Attension is all you need","BERT : pre-training of Deep Biderectional Transformers ","Improving Language Understanding by Generative Pre-Training","Language Models are Unsupervised Multitask Learners"])

style_input = st.selectbox( "select Explaination style ",["Beginer-freindly","Technical","Code-oreinted","Mathematical"])

lenght_input = st.selectbox("Slect Explaination length" ,["Short (1 -2 paragraph)","Medium (3-5 paragraph)","Long (detailed explaination)"])

template = load_prompt("prompt.json")

prompt = template.invoke({
        'paper_name' : paper_input,
        "style" : style_input,
        "length" : lenght_input
})
if st.button("summarise"):
    result = model.invoke(prompt)
    st.write(result.content)