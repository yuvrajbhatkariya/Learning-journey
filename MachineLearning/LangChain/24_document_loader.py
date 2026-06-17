from langchain_community.document_loaders import TextLoader,PyPDFLoader,DirectoryLoader,WebBaseLoader
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from langchain_google_genai import ChatGoogleGenerativeAI
from dotenv import load_dotenv
import os 

load_dotenv()
parser = StrOutputParser()

model = ChatGoogleGenerativeAI(
    model="gemini-2.5-flash",
    google_api_key=os.getenv("GOOGLE_API_KEY")
)

prompt = PromptTemplate(
    template="From {text} answer the following Questions ? {questions}",
    input_variables=['text','questions']
)


# Types of Document Loaders : -

loader = TextLoader('data.text')
pdf = PyPDFLoader('/Users/yuvrajbhatkariya/Downloads/sih/TeamEleVision.pdf')
multi = DirectoryLoader(
    path = '/Users/yuvrajbhatkariya/Downloads/data_collection',
    glob='*.pdf',
    loader_cls=PyPDFLoader
)
url = 'https://www.kaggle.com/competitions/5-day-ai-agents-intensive-vibecoding-course-with-google'
web = WebBaseLoader(url)



# Lazy loading : - (one by one read doc or say load on demand)
# doc = multi.lazy_load()

# Normal loading : -(load whole documents first than process)
# doc = multi.load()


doc = web.load()


chain = prompt | model | parser

result = chain.invoke({
    'text' : doc,
    'questions' : "What is the program Time line and give small summary of the Programm."
})


# print(result)
# print(doc)

# print(result[0].metadata)
# print(result[0].page_content

print(len(doc))

# for d in doc:
#     print(d.metadata)

print(result)