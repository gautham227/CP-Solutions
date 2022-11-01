t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    a=[]
    b=[]
    for i in l:
        if i in a:
            b.append(i)
        else:
            a.append(i)
    a.sort()
    b.sort()
    for i in b:
        a.append(i)
    for i in range(0,len(l)-1):
        print(a[i], end=" ")
    print(a[len(l)-1])    