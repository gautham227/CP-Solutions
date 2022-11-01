a,b,c=map(int,input().split())
s=str(a)+str(b)+str(c)
if int(s)%4==0:
    print("YES")
else:
    print("NO")