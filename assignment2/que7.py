l=int(input("enter the limit - "))
t=()
ls=[]
c=0
for i in range(2,l+1):
    c=0
    for j in range(1,i+1):
        if(i%j==0):
            c+=1
    if c==2:
                t=i,'Prime'
                ls.append(t)
                
    else:
                t=i,'Non Prime'
                ls.append(t)
print(ls)

        