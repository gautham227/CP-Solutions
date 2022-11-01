t=int(input())
for i in range(0,t):
    r,b,d=map(int,input().split())
    if min([r,b])+(d*min([r,b]))>=max([r,b]):
        print("YES")
    else:
        print("NO")