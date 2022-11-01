t=int(input())
for i in range(0,t):
    q,d=input().split()
    q=int(q)
    d=int(d)
    l=list(map(int,input().split()))
    for j in l:
        if j>=(d*10):
            print("YES")
        else:
            for k in range(1,11):
                n=0
                if (j-(k*d))%10==0 and (j-(k*d))>=0:
                    n=n+1
                    break
            if n==0:
                print("NO")
            else:
                print("YES")