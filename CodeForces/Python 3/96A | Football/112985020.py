l=list(input())
g="0"
n=0
k=0
for i in l:
    if i!=g:
        if i=="0":
            g="0"
            n=1
        else:
            g="1"
            n=1
    else:
        n=n+1
        if n==7:
            k=1
            break
if k==0:
    print("NO")
else:
    print("YES")