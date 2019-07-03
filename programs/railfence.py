d=int(input())
s=input()
l=len(s)
n=l//d

a=[[" " for i in range(l)] for j in range(d)]
c=0
i=j=0
inc=1
k=0
for j in range(l):
    a[i][j]='*'
    if(i==d-1):
        inc=-1
    elif i==0:
        inc=1
    i=i+inc

for i in range(d):
    for j in range(l):
        if(a[i][j]=="*"):
            a[i][j]=s[k]
            k+=1
i=j=0
inc=1
k=0
for j in range(l):
    print(a[i][j],end="")
    if(i==d-1):
        inc=-1
    elif i==0:
        inc=1
    i=i+inc







