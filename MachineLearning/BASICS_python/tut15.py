# ------------: USER DEFINED FUNCTION :--------->

# def Ved():
#     A = input("What is your name ? \n",)    
#     print("Good Morning,",A,"!" )
#     print("Do you love naruto ?")
#     if (A == "Hinata"):
#         print('''  ˖⁺‧₊˚♡˚₊‧⁺˖  ''')
#     else:
#         print("No")
# Ved()

# Reurning Values :-

# def Ved(A):
#     print("calculating ......")
#     return sum(A)
# B = [3,4,5,6,7,8,9,0]
# print(sum(B))

# Number of Argument :-
# def Ved(A,B):
#     print(A*B)
# Ved(4,5)

# Arbitary arguments :-
def Ved(A):
    for name in A:
        print("Good Morning",name)
B = []
Z = int(input("Enter how many name you want to write : "))
print(Z)
print("Enter the names one by one")
for i in range(Z):
    Y = input()
    B.append(Y)
# print(A)
Ved(B)