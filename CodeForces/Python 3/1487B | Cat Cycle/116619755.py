t=int(input())
for i in range(0,t):
    a,b=map(int,input().split())
    #a-no of spot b=no of hours
    if a%2==0:
        if b%a==0:
            print((a))
        else:
            print(b%a)
    else:
        if b<=a//2:
            print(b)
        else:
            d=(b-1)//(a//2)
            s=d+b
            if s%a==0:
                print(a)
            else:
                print(s%a)