n=int(input())
l=list(map(int,input().split()))
l.sort()
s=(l[0]+l[1])/2
for i in range(2,len(l)):
    s=(s+l[i])/2
print(s)