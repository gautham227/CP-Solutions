t=int(input())
for i in range(0,t):
    a,b=map(int,input().split())
    if a%2==0 and b%2!=0:
        print("NO")
    elif a%2!=0 and b%2==0:
        print("NO")
    elif a<b**2:
        print("NO")
    else:
        print("YES")