import math
t=int(input())
for i in range(0,t):
    a,b,c=input().split()
    a=int(a)
    b=int(b)
    c=int(c)-1
    d=(c//a)+1
    e=(c%a)+1
    print(b*(e-1)+d)