t=int(input())
for i in range(0,t):
    a,b=map(int,input().split())
    if b<a:
        print(b)
    else:
        if b%(a-1)==0:
            s=b//(a-1)
            print(a*s-1)
        else:
            s=b//(a-1)
            print(a*s+(b%(a-1)))