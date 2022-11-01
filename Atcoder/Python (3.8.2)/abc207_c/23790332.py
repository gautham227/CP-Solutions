#coded by gautham on 26/6
n=int(input())
s=[]
c=0
for i in range(0,n):
    t,l,r=map(int,input().split())
    if t==1:
        k=[l,r,t]
    if t==2:
        k=[l,r-1,t]
    if t==3:
        k=[l+1,r,t]
    if t==4:
        k=[l+1,r-1,t]
    for i in s:
        j=[i,k]
        j.sort()
        if j[1][0]<=j[0][1]:
            c=c+1
        elif j[1][0]==j[0][1]+1 and j[0][2] in [2,4] and j[1][2] in [3,4]:
            c=c+1
    s.append(k)
print(c)