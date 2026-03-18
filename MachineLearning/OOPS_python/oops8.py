# # INHERITANCE :-)

# # 1. single inheritance :-
# class car:
#     whells = 4
#     __engine = "AXCO0032NS"      # private member
#     @staticmethod
#     def start():
#         print("Car started")

#     @staticmethod
#     def stop():
#         print("Car stop")

#     def engine(self):
#         print(self.__engine)

# class toyota(car):
#     def __init__(self,name):
#         self.name = name 
#         print(self.name,self.engine())

# o1 = toyota("Mercedies")
# o1.start()
# o1.stop()
# print(o1.whells) 
# #print(o1.engine)              # not accesable


# # 2. MULTI LEVEL INHERITANCE :-
# class vault :
#     ammount = 0
#     def __init__(self):
#         self.__account = "ACXXX00078303"
#         print("Account no. : " ,self.__account)
#         print("balance : " ,self.ammount)
# class credit(vault):
#     def house_renting(self, rent):
#         self.rent = rent
#         print("Credit ammount by house renting : ",self.rent)
#         self.ammount += self.rent
# class debit(credit):
#     def incometax(self, tax):
#         self.tax = tax
#         print("Debit ammount by incometax : ",self.tax)
#         self.ammount -= self.tax
# class Total(debit):
#     def balance(self):
#         print("Tolal balance : ",self.ammount)


# o1 = Total()
# o1.incometax(1000)
# o1.house_renting(10000)
# o1.balance()



#  3. Multiple inheritance :-

# class a:
#     var1 = 0
#     def A(self,var1):
#         self.var1 = var1
# class b:
#     var2 = 0
#     def B(self,var2):
#         self.var2 = var2
# class c:
#     var3 = 0
#     def C(self,var3):
#         self.var3 = var3
# class d(a,b,c):
#     def d(self):
#         print("Total : ", self.var1 + self.var2+ self.var3)


# o1 = d()
# o1.A(2)
# o1.B(2)
# o1.C(2)
# o1.d()



class a:
    var1 = 0
    def __init__(self,var1):
        self.var1 = var1
class b:
    var2 = 0
    def __init__(self,var2):
        self.var2 = var2
class c:
    var3 = 0
    def __init__(self,var3):
        self.var3 = var3
class d(a,b,c):
        def __init__(self, var1, var2, var3):
            a.__init__(self, var1)
            b.__init__(self, var2)
            c.__init__(self, var3)
        def d(self):
            print("Total : ", self.var1 + self.var2+ self.var3)


o1 = d(2,3,3)
o1.d()