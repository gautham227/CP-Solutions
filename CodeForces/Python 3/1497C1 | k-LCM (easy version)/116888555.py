t=int(input())
for i in range(0,t):
    n,b=map(int,input().split())
    if n%4==0:
        print((n//2)//2,(n//2)//2,n//2)
    elif n%4==1:
        print(1,n//2,n//2)
    elif n%4==2:
        print(2,n//2-1,n//2-1)
    else:
        print(1,n//2,n//2)