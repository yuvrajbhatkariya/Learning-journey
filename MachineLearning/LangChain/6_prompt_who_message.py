from langchain_ollama import ChatOllama
from langchain_core.messages import SystemMessage, AIMessage,HumanMessage


messages = [
    SystemMessage(content="Your are an AI Engnieer"),
    HumanMessage(content="Who are you ?")

]
model = ChatOllama(
    model="qwen2.5-coder:7b",
    temperature=0.5
)

result = model.invoke(messages)
messages.append(AIMessage(content=result.content))
print(messages)