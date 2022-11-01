#coded by gautham on 9/7
t=int(input())
for i in range(0,t):
    a=int(input())
    l=list(map(int,input().split()))
    s=sum(l)
    if s<a:
        print(s*(a-s))
    elif s==a:
        print(0)
    else:
        b=s//a
        c=s-b*a
        h=(s-c*(b+1))//b
        print(h*c)