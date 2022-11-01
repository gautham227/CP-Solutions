t=int(input())
for i in range(0,t):
    n,x,y=input().split()
    a,b=input().split()
    n=int(n)
    x=int(x)
    y=int(y)
    a=int(a)
    b=int(b)
    if (x+y)>=2*a and ((2*n)-x-y)>=2*b:
        print("Yes")
    else:
        print("No")
        