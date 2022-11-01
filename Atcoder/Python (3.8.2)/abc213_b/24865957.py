#coded by gautham on 8/8
n=int(input())
l=list(map(int,input().split()))
l1=list(l)
l1.sort()
a=l1[-2]
print(l.index(a)+1)