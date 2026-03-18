from fastapi import FastAPI
from enum import Enum
app = FastAPI()


# get    : read data
# post   : create data
# put    : Update data
# delete : delete data

class AvailableCusine(str,Enum):
    Indian = "Indian"
    Italian = "Italian"
    Mexican = "Mexican"
    Spanish =  "Spanish"


foods = {
    "Indian": ["Samosa", "Dosa", "Poha", "Biryani", "Paneer Butter Masala", "Chole Bhature"],
    "Italian": ["Pizza", "Pasta", "Lasagna", "Risotto", "Bruschetta", "Tiramisu"],
    "Mexican": ["Tacos", "Burrito", "Quesadilla", "Nachos", "Chili con Carne", "Enchiladas"],
    "Spanish": ["Paella", "Gazpacho", "Tortilla Española", "Churros", "Patatas Bravas", "Croquetas"]
}

@app.get("/")
def home():
    return "Server is running !!!!!"


# @app.get("/hello/{name}")
# async def hello(name):
#     return f"Welcome !!!!!!!! {name}"

# @app.get("/get_cusine/{cusine}")
# async def get_cusine(cusine):
#     return foods.get(cusine)

# RETRIVE
@app.get("/get_cusine/{cusine}")
async def get_cusine(cusine:AvailableCusine):
    print("Cusine is running !!!!!")
    return foods.get(cusine)

# CREATE
@app.post("/add_dish/{cusine}")
async def add_dish(cusine:AvailableCusine,dish: str):
    foods[cusine].append(dish)
    return {"message": f"{dish} is added to {cusine} cusine" }

# UPDATE
@app.put("/update_dish/{cusine}")
async def update_dish(cusine:AvailableCusine, old_dish: str,new_dish : str):
    if old_dish in foods[cusine]:
        index = foods[cusine].index(old_dish)
        foods[cusine][index] = new_dish
        return {"message" : f"{old_dish} update to {new_dish} in {cusine}"}
    return  {"error": f"{old_dish} not found in {cusine}"}

# DELETE
@app.delete("/delete_dish/{cuisine}")
async def delete_dish(cuisine: AvailableCusine, dish: str):
    if dish in foods[cuisine]:
        foods[cuisine].remove(dish)
        return {"message": f"{dish} deleted from {cuisine}"}
    return {"error": f"{dish} not found in {cuisine}"}