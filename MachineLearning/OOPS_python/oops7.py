# public and private members :-
class Account:
    def __init__(self,account_no,password):
        self.account_no = account_no
        self.__password = password    # this is an private member

    def change(self):
       
        print(self.__password)
        

O1 = Account(231020460,"abcd1234")

print(O1.account_no)
# print(O1.password)    # this will give an error

O1.change()   # calling function to acess private member





# public and private function : -
class secret:
    
    def __attack(self):       # private function
        return "WELCOME ! "
    def truth(self,name):
        self.name = name       # public function
        print(self.__attack(),self.name)

o1 = secret()
o1.truth("Vednesday")
# o1.__attacK()
# a = o1.attack()
# print(a)
