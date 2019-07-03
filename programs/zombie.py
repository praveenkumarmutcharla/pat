def power(z,x):
    x=x-((z%2)+(z//2))
    return x

x,n=[int(i) for i in input().split()]

s=[int(i) for i in input().split()]

#s.sort()

for i in s:
    if(i>x):
        print("NO")
        break
    else:
        x=power(i,x)
else:
    print("YES")

