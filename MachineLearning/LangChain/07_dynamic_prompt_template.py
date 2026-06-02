from langchain_core.prompts import ChatPromptTemplate

chat_template = ChatPromptTemplate([
    ('system','you are a helpfull {domain} expert'),
    ('human',"What is {topic}")
])

prompt = chat_template.invoke({'domain': 'cricket' ,'topic' : 'off spin'})
print(prompt)