from langchain_ollama import ChatOllama
from typing import TypedDict,Annotated,Optional,Literal


model = ChatOllama(
    model = 'qwen2.5-coder:7b',
    temperature=0.5
)


# schema : -
class review(TypedDict):
    summary : Annotated[list[str],"make is short and informative"]
    sentiment : Annotated[Literal["pos","neg"],"Give the sentiment of review like positive or negative"]
    pros : Annotated[Optional[str],"If any pros is present in the text"]
    cons : Annotated[Optional[str],"If any cons is present in the text"]
    name : Annotated[Optional[str],"write the name of reviewer if present"]

structured_model = model.with_structured_output(review)

result = structured_model.invoke('''I’ve been using this product for some time now, and overall it performs well. The build quality feels sturdy, and the performance is reliable for everyday use. Setup was straightforward, and it works exactly as mentioned in the description. It offers good value for money, especially at this price point.

✅ Pros:

Good build quality

Easy to set up and use

Reliable performance for daily tasks

Value for money

Delivered on time with proper packaging

❌ Cons:

Battery life could be better

Slight heating during long usage

Limited advanced features
                                 
by Nitish Pandey
''')
print(result)
