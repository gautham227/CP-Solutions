n=int(input())
l=list(map(int,input().split()))
s=0
c=0
for i in l:
    if i==-1:
        if s>0:
            s=s-1
        else:
            c=c+1
 
    else:
        s=s+i
print(c)