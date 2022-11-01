t=int(input())
for o in range(0,t):
    s=0
    n=int(input())
    l=list(map(int,input().split()))
    a=0
    b=0
    c=0
    for i in l:
        if i%3==0:
            a=a+1
        elif i%3==1:
            b=b+1
        else:
            c=c+1
    k=int(n/3)
    if a<k:
        s=k-a
        c=c-s
        a=k
    else:
        s=a-k
        b=b+s
        a=k
    if b>c:
        s=s+b-k
    else:
        s=s+2*(c-k)
    print(s)    
         
            