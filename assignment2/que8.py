l=int(input("enter the limit - "))
d={}
ls=[]
c,f=0,0
for i in range(2,l+1):
    c=0
    for j in range(2,i//2+1):
        if(i%j==0):
            c+=1
    if c==0:
        d[i]="Prime"
    else:
        d[i]="Non Prime"
        ls.append(i)
for i in ls:
    del d[i]
    f+=1
print(d)
print("The number of elements deleted is - ",f)    
        
        
        