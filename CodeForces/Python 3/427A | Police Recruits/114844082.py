t=int(input())
l=list(map(int,input().split()))
s=0
p=0
for i in l:
    if i!=-1:
        s=s+i
    else:
        if s>0:
            s=s-1
        else:
            p=p+1
print(p)
 