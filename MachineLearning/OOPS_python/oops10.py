# Super method :-
class student: 
    def __init__(self,name):
        self.name = name
        print("Hello !",self.name)

    def marks(self, chemistry,physics , maths):
        self.chemistry = chemistry
        self.maths = maths 
        self.physics = physics

class Result(student):
    def __init__(self, decision,name):
        self.decision = decision
        super().__init__(name)
        self.name = name 
        print(self.decision)

    def Total(self):
        print("Total : ", self.chemistry + self.physics + self.maths)

o1 = Result("PASS","Yuvraj")
# print(o1.name)
o1.marks(96,97,98)
o1.Total()



