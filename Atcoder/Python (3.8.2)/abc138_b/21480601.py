n=int(input())
l=list(map(int,input().split()))
s=0
for i in l:
    s=s+(1/i)
r=1/s
print(r)