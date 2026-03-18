from pydantic import BaseModel,EmailStr
from typing import Optional


class Employe(BaseModel):

    name : str
    age : Optional[int] = None
    email : EmailStr

new_employe= {
    'name' : 'Tony',
    'age'  : '33',
    'email' : 'yuvraj@gmail.com',
    'email' : 'yuvraj@zoho.com'

}

employe = Employe(**new_employe)

print(employe)