#coded by gautham on 24/6
t=int(input())
l=list(map(int,input().split()))
l.sort()
n=int(input())
a=0
for i in range(0,n):
    x=int(input())
    if x<l[0]:
        print(0)
    else:
        f=0
        e=t-1
        while f<=e:
            m=(f+e)//2
            if x>=l[m]:
                a=m
                f=m+1
            else:
                e=m-1
        print(a+1)