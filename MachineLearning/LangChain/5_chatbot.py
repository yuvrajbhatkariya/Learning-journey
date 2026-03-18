from langchain_ollama import ChatOllama
import json
from langchain_core.messages import AIMessage,SystemMessage,HumanMessage
from langchain_core.prompts import ChatPromptTemplate ,MessagesPlaceholder
import os

filename = "chat_history.json"

model = ChatOllama(
    model="qwen2.5-coder:7b",
    temperature=0.5
)

prompt = ChatPromptTemplate.from_messages([
    ("system","You are a History and Political Professor ,When asked about your identity or role, you must say that you are a History and Political Professor."),
    MessagesPlaceholder(variable_name="chat_history"),
    ("human" , "{input}")
])

chain  = prompt | model


# Memory Handeling : -
chat_history = []
if os.path.exists("chat_history.json"):
    with open("chat_history.json", "r", encoding="utf-8") as f:
        try :
            data = json.load(f)
        except json.JSONDecodeError:
            data = []

    for item in data:
        if item["role"] == "HumanMessage":
            chat_history.append(HumanMessage(content=item["content"]))
        elif item["role"] == "AIMessage":
            chat_history.append(AIMessage(content=item["content"]))


initial_history_length = len(chat_history)

# bot conversation part : -
while True:
    user_input = input("You    : ")

    if user_input == 'exit':
        break

    result = chain.invoke({
            "chat_history" :chat_history,
            "input" : user_input
        })
    

    chat_history.append(HumanMessage(content=user_input))
    chat_history.append(AIMessage(content=result.content))
    print("AI     : ", result.content)


chat_history = chat_history[-20:]

# Handeling and saving history  : -
if os.path.exists(filename):
    with open(filename, "r", encoding="utf-8") as f:
        try:
            old_data = json.load(f)
        except json.JSONDecodeError:
            old_data = []
else:
    old_data = []


new_data = [
    {"role": msg.__class__.__name__, "content": msg.content}
    for msg in chat_history[initial_history_length:]
]

old_data.extend(new_data)

with open(filename, "w", encoding="utf-8") as f:
    json.dump(old_data, f, indent=2, ensure_ascii=False)
