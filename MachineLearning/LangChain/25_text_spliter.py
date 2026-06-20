#  visualize ---> https://chunkviz.up.railway.app/

from langchain_text_splitters import CharacterTextSplitter,RecursiveCharacterTextSplitter,Language
from langchain_experimental.text_splitter import SemanticChunker 
from langchain_community.document_loaders import PyPDFLoader
from langchain_huggingface import HuggingFaceEmbeddings

embeddings = HuggingFaceEmbeddings(
    model_name="sentence-transformers/all-MiniLM-L6-v2"
)

text1 = '''
Hello seteve, i am bob. i have heared that you become the part of avengers.
Is it coreect.
Iron-man is my favourite ans i also liked Spider man.

Do you know about anime. One Piece is my favourite.I love to eat vegetables and fruits.
'''
text2 = '''
class ArrayOperations:
    
    def add(self, arr1, arr2):
        return [a + b for a, b in zip(arr1, arr2)]

    def subtract(self, arr1, arr2):
        return [a - b for a, b in zip(arr1, arr2)]


# Example
arr1 = [10, 20, 30]
arr2 = [1, 2, 3]

obj = ArrayOperations()

print("Addition:", obj.add(arr1, arr2))
print("Subtraction:", obj.subtract(arr1, arr2))
'''


# loader = PyPDFLoader('Data/attention-is-all-you-need.pdf')
# doc = loader.load()

# 1. Length based splitter : -
spli1 = CharacterTextSplitter(
    chunk_size = 10,
    chunk_overlap = 0,
    separator=' '
)
#2. Text structure based splitter(tree) : -
spli2 = RecursiveCharacterTextSplitter(
    chunk_size = 25,
    chunk_overlap = 5,
)
#3. Document structure based : -
spli3 = RecursiveCharacterTextSplitter.from_language(
    language = Language.PYTHON,
    chunk_size = 150,
    chunk_overlap = 0
)
# 4. Semantic meaning based : -
spli4 = SemanticChunker(
    embeddings=embeddings,
    breakpoint_threshold_type="percentile",
    breakpoint_threshold_amount=70
)


# Document Splitter :-
# result = splitter.split_documents(doc)

# text Splitter :-
ans = spli4.split_text(text1)


# print(len(result))
# print(result[0])

print(len(ans))
print(ans[1])