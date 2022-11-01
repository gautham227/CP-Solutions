from math import factorial
a,b,k=map(int,input().split())
while a>0 or b>0:
    if a==0:
        print("b"*b)
        b=0
    elif b==0:
        print("a"*a)
        a=0
    else:
        p = factorial(a + b - 1) // (factorial(a - 1) * factorial((b)))
        if p>=k:
            print("a",end="")
            a=a-1
        else:
            print("b",end="")
            b=b-1
            k=k-p