t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    n=0
    for i in l:
        if i**(0.5)!=int(i**(0.5)):
            n=1
            break
    if n==0:
        print("NO")
    else:
        print("YES")
 
        