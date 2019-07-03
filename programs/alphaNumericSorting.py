t=int(input())
for _ in range(t):
    s=input().split()
    names=[s[x] for x in range(len(s)) if x%2==0]
    nums=[s[x] for x in range(len(s)) if not x%2==0]
    names.sort()
    nums.sort()
    for i in range(len(names)):
        print(names[i],nums[i])