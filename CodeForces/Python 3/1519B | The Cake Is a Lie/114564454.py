t=int(input())
for o in range(0,t):
    n,m,k=map(int,input().split())
    s=0
    maxi=0
    mini=0
    p=n-1+m-1
    l=[1,1]
    for i in range(0,p):
        if l[0]==n:
            maxi=maxi+(m-l[1])*l[0]
            break
        elif l[1]==m:
            maxi=maxi+(n-l[0])*l[1]
            break
        elif l[0]>=l[1]:
            l[1]=l[1]+1
            maxi=maxi+l[0]
        else:
            l[0]=l[0]+1
            maxi=maxi+l[1]
    l=[1,1]
    for i in range(0,p):
        if l[0]==n:
            mini=mini+(m-l[1])*l[0]
            break
        elif l[1]==m:
            mini=mini+(n-l[0])*l[1]
            break
        if l[0]>=l[1]:
            l[0]=l[0]+1
            mini=mini+l[1]
        else:
            l[1]=l[1]+1
            mini=mini+l[0]
    if k<=maxi and k>=mini:
        print("YES")
    else:
        print("NO")