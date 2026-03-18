# Decorator : -
# Static method 

class student :
    def __init__(self) :
        print("Welcome buddy !")
    

    @staticmethod
    def ved():                 # if we do not use 'self' in argument than use static method 
        print("Hiiiiiiiii !")


s1 = student()
s1.ved()