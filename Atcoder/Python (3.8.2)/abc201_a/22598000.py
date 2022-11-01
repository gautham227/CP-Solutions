a,b,c=map(int,input().split())
l=[a,b,c]
l.sort()
if l[2]-l[1]==l[1]-l[0]:
    print("Yes")
else:
    print("No")