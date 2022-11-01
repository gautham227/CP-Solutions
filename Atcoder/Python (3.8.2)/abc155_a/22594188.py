a,b,c=map(int,input().split())
if (a==b or a==c or b==c):
    if a==b==c:
        print("No")
    else:
        print("Yes")
else:
    print("No")