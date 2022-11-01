t=int(input())
for o in range(0,t):
    n=int(input())
    p=0
    q=0
    if n%4!=0:
        print("NO")
        continue
    else:
        print("YES")
        k=int(n/2)
        for i in range(1,k+1):
            print(2*i, end=" ")
            p=p+2*i
        for i in range(0,k-1):
            print(2*i+1, end=" ")
            q=q+2*i+1
        print(p-q)
            