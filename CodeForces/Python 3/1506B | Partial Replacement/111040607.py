import math
t=int(input())
for i in range(0,t):
    a,b=input().split()
    a=int(a)
    b=int(b)
    s=str(input())
    f=[]
 
    h=0
    for i in range(0,len(s)):
        if s[i]=="*":
            f.append(i)
    if len(f)<3:
        print(len(f))
    else:
        y=f[0]
        for j in range(0,len(f)):
            if f[j]-y>b:
                h=h+1
                y=f[j-1]
                j=j-1
        print(2+h)