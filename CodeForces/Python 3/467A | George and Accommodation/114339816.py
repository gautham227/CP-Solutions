t=int(input())
k=0
for i in range(0,t):
    a,b=map(int,input().split())
    if b-a>=2:
        k=k+1
print(k)