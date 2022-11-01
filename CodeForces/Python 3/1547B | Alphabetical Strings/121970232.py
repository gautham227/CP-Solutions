#coded by gautham on 10/7
t=int(input())
w="abcdefghijklmnopqrstuvwxyz"
for i in range(0,t):
    l=list(input())
    k=len(l)
    n=set(l)
    u=0
    if k!=len(n):
        print("NO")
    else:
        s=w[:k]
        for j in range(1,k-1):
            if l[j] not in s or (l[j]>l[j+1] and l[j]>l[j-1]):
                u=1
                break
        if l[0] not in s or l[-1] not in s:
            u=1
        if u==1:
            print("NO")
        else:
            print("YES")