# CLASS and FUNCTION : -

class student : 
    def __init__(self,maths,chemistry,physics):
        self.maths = maths
        self.chemistry= chemistry
        self.physics = physics
        
    def average(self):
        A = self.maths
        B= self.chemistry
        C = self.physics

        print("The average of marks is : ",int( (A+B+C)/3))

s1 = student(50,62,85)
s1.average()