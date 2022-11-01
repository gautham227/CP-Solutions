n=int(input())
l=list(map(int,input().split()))
s=sum(l)
print(max(l)*n-s)