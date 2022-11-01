def ga(b,a):
    n=len(b)
    m=len(a)
    f=1001
    for i in range(m-n+1):
        t=0
        for j in range(n):
            if b[j]!=a[i+j]:
                t=t+1
        f=min(t,f)
    return f

a=str(input())
b=str(input())
print(ga(b,a))