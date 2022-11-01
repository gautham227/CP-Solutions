n=int(input())
l=list(map(int,input().split()))
s=[]
for i in range(1,n+1):
    s.append(l.index(i)+1)
for i in s:
    print(i, end=" ")