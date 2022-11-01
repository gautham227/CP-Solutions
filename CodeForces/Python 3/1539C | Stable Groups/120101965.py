n,k,x=map(int,input().split())
l=list(map(int,input().split()))
s=[]
l.sort()
for i in range(1,n):
    if l[i]-l[i-1]>x:
        s.append((l[i]-l[i-1]-1)//x)
s.sort(reverse=True)
for i in range(0,n):
    if len(s)>0:
        g=len(s)
        if s[g-1]<=k:
            k=k-s[g-1]
            s.pop(-1)
        else:
            break
    else:
        break
print(len(s)+1)