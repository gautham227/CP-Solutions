n=int(input())
l=[]
for i in range(0,n):
    s=str(input())
    if s in l:
        print("YES")
    else:
        print("NO")
        l.append(s)