n=int(input())
k=0
l=list(map(int,input().split()))
for i in range(0,n):
    if l[i]%2==0:
        if l[i]%3==0 or l[i]%5==0:
            continue
        else:
            k=1
            break
if k==1:
        print("DENIED")
else:
        print("APPROVED")