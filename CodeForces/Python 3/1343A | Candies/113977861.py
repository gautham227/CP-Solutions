t=int(input())
for i in range(0,t):
    n=int(input())
    c=0
    m=2
    while c==0:
        x=n/((2**m)-1)
        y=int(x)
        if y==x:
            print(y)
            c=1
        else:
            m=m+1