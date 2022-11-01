t=int(input())
for i in range(0,t):
    a,b=map(int,input().split())
    if 2*(min([a,b]))>=max([a,b]):
        print((2*(min([a,b])))**2)
    else:
        print(max([a,b])**2)