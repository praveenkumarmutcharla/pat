n=int(input())
l=[int(x) for x in input().split()]
c=0
a=[]
b=[]
x=l[0]
a.append(x)
for i in range(1,n):
    if(x<=l[i]):
        a.append(l[i])
        x=l[i]
    else:
        b.append(a)
        x=l[i]
        a=[]
        a.append(x)   
else:
    b.append(a)

print(sorted(b)[-1])
