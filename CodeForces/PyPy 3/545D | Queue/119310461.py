t=int(input())
l=list(map(int,input().split()))
l.sort()
n=0
s=0
for i in l:
   if i>=s:
       n=n+1
       s=s+i
print(n)