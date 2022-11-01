n,q=map(int,input().split())
s=str(input())
l=[]
p=0
for i in s:
    p = p + ord(i)-96
    l.append(p)
for i in range(0,q):
    p=0
    a,b=map(int,input().split())
    if a==1:
        print(l[b-1])
    else:
        print(l[b-1]-l[a-2])