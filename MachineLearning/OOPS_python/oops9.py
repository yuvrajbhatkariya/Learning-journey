class student:
    def exam(self,a):
        self.a = a
        print("I am not ready !")
    def subject(self,M,C,P,hacked):
        self.M = M
        self.C = C 
        self.P = P
        self.hacked = hacked
    def Marks(self, m,c,p):
        self.m = m
        self.c = c
        self.p = p
class result(student) :
    def total(self,hacked,a):
        super().exam(a)
        self.hacked = hacked
        print("Total : ", self.M + self.C + self.P+ self.hacked )
o1 = result()
o1.subject(3,4,4,0)
o1.total(100,0)
