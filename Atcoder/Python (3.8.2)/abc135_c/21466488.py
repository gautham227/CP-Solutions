n=int(input())
l=list(map(int,input().split()))
m=list(map(int,input().split()))
s=0
for i in range(0,len(m)):
    if m[i]>=l[i]:
        s=s+l[i]
        m[i]=m[i]-l[i]
        l[i]=0
        if m[i]>0:
            if m[i]>=l[i+1]:
                s=s+l[i+1]
                l[i+1]=0
            else:
                s=s+m[i]
                l[i+1]=l[i+1]-m[i]
    else:
        s=s+m[i]
        l[i]=l[i]-m[i]
print(s)