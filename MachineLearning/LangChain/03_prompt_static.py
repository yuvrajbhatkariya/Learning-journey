from langchain_huggingface import ChatHuggingFace ,HuggingFaceEndpoint
import streamlit as st
from dotenv import load_dotenv
import requests
import json

load_dotenv()

st.header("Research Summarizer")
user_imput = st.text_input("Emter the prompt")

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




if st.button("summarise"):
    # response = requests.post(url, json=payload)
    # st.write(response.json()["response"])
    result = model.invoke(user_imput)
    st.write(result.content)