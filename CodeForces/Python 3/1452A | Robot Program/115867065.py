t=int(input())
for i in range(0,t):
    a,b=map(int,input().split())
    if a==b:
        print(a+b)
    else:
        print(max([a,b])+max([a,b])-1)