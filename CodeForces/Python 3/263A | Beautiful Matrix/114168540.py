n=-1
k=0
for i in range(5):
    s=list(map(int,input().split()))
    n=n+1
    if 1 in s:
        k=s.index(1)
        g=n
print(abs(2-g)+abs(2-k))