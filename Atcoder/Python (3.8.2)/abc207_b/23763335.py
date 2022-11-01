#coded by gautham on 26/6
a,b,c,d=map(int,input().split())
cy=a
r=0
k=0
if b>=d*c:
    print(-1)
else:
    while d*r<cy:
        r=r+c
        cy=cy+b
        k=k+1
    print(k)