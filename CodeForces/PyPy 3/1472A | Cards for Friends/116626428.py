t=int(input())
for i in range(0,t):
    a,b,c=map(int,input().split())
    c1=1
    c2=1
    while a%2==0:
        a=a//2
        c1=c1*2
    while b % 2 == 0:
        b=b//2
        c2=c2*2
    if c1*c2>=c:
        print("YES")
    else:
        print("NO")