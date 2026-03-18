#  LIST METHOD :---->

# A= [1,2,3,4]
# B = ["Hinata","Naruto","Sakura","Sasuke"]
# C = [9,1,7,5,2,8,6,3,10,4]
# print(A)
# # 1. append

# A.append(6)
# print(A)
# A[4] = 5
# print(A)
# # 2. insert

# # A.insert(0,"Hinata")
# print(A)
# B.insert(1,"Love")
# B.insert(4,"Love")
# B.insert(3,"Love")
# print(B)
# # ['Hinata', 'Love', 'Naruto', 'Love', 'Sakura', 'Love', 'Sasuke']

# # 3. sort 
# C.sort()
# print(C)

# # 4. pop
# B.pop(3)
# print(B)

# # 5. clear 
# C.clear()
# print(C)

# # 6. reverse
# A.reverse()
# print(A)

# # 7. index
# print(B.index("Naruto"))

# # 8. Count 
# print(B.count("Love"))


# List function:---->
A = [1,2,3,4,5,6,7]

# 1. len(list)
print(len(A))
# 2. max(list)
print(max(A))
# 3. min(list)
print(min(A))
# 4. list(seq)
print(list("123456789"))
# 5. sum(list)
print(sum(A))



# FOR LOOP IN LIST :--------->
for v in A:
    print("V"*v, end = " ")
    print(v*9, end = " ")