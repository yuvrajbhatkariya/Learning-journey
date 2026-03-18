# Property Decorator :-

class Student:
    def __init__(self,M,C,P):
        self.M = M
        self.C = C
        self.P = P
    

    @property
    def percentage(self):
        return str((self.M + self.C + self.P)/3) + "%"
    

o1 = Student( 67,99,90)
print(o1.percentage)


o1.M= 95
print(o1.percentage)





