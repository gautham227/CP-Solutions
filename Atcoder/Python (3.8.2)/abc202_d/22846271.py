def nCr(n, r):
    return (fact(n) // (fact(r) * fact(n - r)))
def fact(n):
    res = 1
    for i in range(2, n + 1):
        res = res * i
    return res
def element(a,b,k):
    if a==0:
         print("b"*b)
    elif b==0:
        print("a"*a)
    else:
        p=nCr(a+b-1,a-1)
        if k<=p:
            print("a",end="")
            a=a-1
            element(a,b,k)
        else:
            print("b",end="")
            b=b-1
            element(a,b,k-p)
a,b,k=map(int,input().split())
element(a,b,k)