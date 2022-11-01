n=int(input())
l=list(map(int,input().split()))
t=0
if n==1:
    print("Yes")
else:
    for i in range(1,len(l)):
        if l[i]>l[i-1]:
            l[i]=l[i]-1
    for i in range(1,len(l)):
        if l[i]<l[i-1]:
            t=1
            break
    if t==0:
        print("Yes")
    else:
        print("No")