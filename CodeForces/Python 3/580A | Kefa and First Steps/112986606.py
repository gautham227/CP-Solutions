n=int(input())
l=list(map(int,input().split()))
m=[1]
k=l[0]
s=1
for i in range(1,len(l)):
    if l[i]>=l[i-1]:
        s=s+1
    else:
        m.append(s)
        s=1
m.append(s)
print(max(m))