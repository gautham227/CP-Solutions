t=int(input())
l=list(map(int,input().split()))
l.sort()
c=0
w=1
for i in l:
    if i>=w:
        c=c+1
        w=w+1
print(c)