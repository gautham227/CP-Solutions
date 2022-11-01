#coded by gautham on 3/7
t=int(input())
for i in range(0,t):
    a=int(input())
    l=list(map(int,input().split()))
    x=0
    for i in l:
        if i%2==0:
            x=x+1
    if x==a:
        print("Yes")
    else:
        print("No")