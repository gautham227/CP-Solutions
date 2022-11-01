n=int(input())
l=list(map(int,input().split()))
l.sort()
for i in range(0,len(l)-1):
    print(l[i], end=" ")
print(l[-1])