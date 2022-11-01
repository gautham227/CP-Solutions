n,h=map(int,input().split())
l=list(map(int,input().split()))
k=0
for i in l:
    if i>h:
        k=k+2
    else:
        k=k+1
print(k)