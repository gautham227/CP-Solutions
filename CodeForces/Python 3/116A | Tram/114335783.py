n=int(input())
l=[]
s=0
for i in range(0,n):
    a,b=map(int,input().split())
    s=s-a+b
    l.append(s)
print(max(l))