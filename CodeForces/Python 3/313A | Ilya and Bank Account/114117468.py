n=int(input())
if n>=0:
    print(n)
else:
    n=n*(-1)
    n=str(n)
    l=list(n)
    if int(l[-1])>=int(l[-2]):
        l.pop(-1)
    else:
        l.pop(-2)
    k=""
    for i in l:
        k=k+i
    k=int(k)
    print((-1)*k)