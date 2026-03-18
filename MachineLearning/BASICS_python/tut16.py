# FILE :-
# f = open("Pythonfiles/data.txt",'r')
# for j in f:
#     print(f.readline())
# # print(f.read())
# print(f.readlines())
# print(f.readline())
# f.close()



# Without f.close()------------>

# with open("Pythonfiles/data.txt") as A:
#     print(A.read(5))    #-----> it can read letter
#     print(A.read(5))
#     A.seek(0)
#     print(A.read(5))


# Writing-------------->
A = open("Pythonfiles/ruf.txt", 'w')     #------>(if i only write "W" then my file data is erase)
# A = open("Pythonfiles/NEW.txt", 'w')       #------>(if i use this a new file is auto matically created)
A.write("Bye - bye  \nsyonara ")
A.close()

print("hell0")

Y = open("Pythonfiles/ruf.txt", 'r')     
print(Y.read())
A.close()