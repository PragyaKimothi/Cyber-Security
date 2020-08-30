n=int(input("enter the limit of the list -"))
list1=[]
res=1
print("enter the numbers -")
for i in range(0,n):
    a=int(input())
    res=res*a
    list1.append(a)
    print("The result is -",res)