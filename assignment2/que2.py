x=int(input("enter the lower limit"))
y=int(input("enter the upper limit"))
num=int(input("enter the number"))
if num in range(x,y+1):
    print("The number is in the given range")
else:
    print("The number is not within the given range")    