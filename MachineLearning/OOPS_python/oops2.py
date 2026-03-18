class Student :
    college = "international college"          # it only store one time in memory
    name = "Vednesday"
    # def __init__(self):
    #     print("hello !")
        # self.name = "Vednesday"
        # self.age = 1
        # self.grade = 'A'
    def __init__(self,name,age,grade):
        self.name = name
        self.age = age
        self.grade = grade
    def __init__(self,hello , age = None, grade = None ):
        print("hello Vednesday")
        self.hello = hello
        self.age = age 
        self.grade = grade

'''
This is a limitation of Python. Unlike some other languages like Java or C++, Python does not support method
overloading based on the number or types of arguments.When you define multiple methods with the same name,
only the last one defined is considered.
'''
s2 = Student("Selvi",2,'A')
print(s2.name)
print(s2.age, "month")
print(s2.grade)
s1 = Student("Surprise")
print(s1.hello,"Hello")
# print(s2.college)
   


print(Student.college)
print(Student.name)
# s1 = Student("Vednesday")
# print(s1.name)
# s1 = Student()
# print(s1.name)

