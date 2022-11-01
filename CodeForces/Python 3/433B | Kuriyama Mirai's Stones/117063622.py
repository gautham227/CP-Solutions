n=int(input())
l=list(map(int,input().split()))
s=list(l)
s.sort()
t=int(input())
q=0
r=0
for i in range(0,n):
    q=q+l[i]
    l[i]=q
    r=r+s[i]
    s[i]=r
for i in range(0,t):
    a,b,c=map(int,input().split())
    if a==1:
        if b==1:
            print(l[c-1])
        else:
            print(l[c-1]-l[b-2])
    else:
        if b==1:
            print(s[c-1])
        else:
            print(s[c-1]-s[b-2])