#coded by gautham on 30/6
t=int(input())
for i in range(0,t):
    a,b,c=map(int,input().split())
    if c%a==b:
        print(c)
    elif c%a>b:
        print(c-(c%a-b))
    else:
        print(c-c%a-a+b)