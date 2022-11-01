t=int(input())
for i in range(0,t):
    a,b,c,n=map(int,input().split())
    if (a+b+c+n)%3!=0:
        print("NO")
    else:
        s=(a+b+c+n)//3
        a=s-a
        b=s-b
        c=s-c
        if a>=0 and b>=0 and c>=0 and (a+b+c==n):
            print("YES")
        else:
            print("NO")