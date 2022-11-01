t=int(input())
l=list(map(int,input().split()))
s=0
for i in l:
  if i<=10:
    continue
  else:
    s=s+i-10
print(s)