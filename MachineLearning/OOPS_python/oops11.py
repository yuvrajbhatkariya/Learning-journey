#Class Method :-

class method:
    var = "Hello!"

    # def greet(self, var ):
    #     # self.var = var 

    #     # method.var = var                        # method 1
        
    #     self.__class__.var = "Vednesday"          # method 2 : it can excess anything in class  

    @classmethod                                    # method 3
    def greet(self,var):
        self.var = var
        return var

o1 = method()
o1.greet("Vednesday")
print(o1.var)
print(method.var)        
print(method.greet("hello"))