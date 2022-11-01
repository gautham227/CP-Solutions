n=int(input())
l=list(map(int,input().split()))
l.sort(reverse=True)
s=sum(l)
n=0
for i in range(0,len(l)):
    n=n+l[i]
    if n>s-n:
        print(i+1)
        break