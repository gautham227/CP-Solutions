#coded by gautham on 8/7
t=int(input())
for i in range(0,t):
    a,b=map(int,input().split())
    k=abs(a-b)
    if a==b:
        print("0 0")
    else:
        print(k,min(a%k,k-a%k))