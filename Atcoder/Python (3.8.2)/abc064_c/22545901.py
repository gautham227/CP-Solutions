t=int(input())
l=list(map(int,input().split()))
m=[0,0,0,0,0,0,0,0]
t=0
for i in l:
    if i>=1 and i<=399:
        m[0]=m[0]+1
    elif i>=400 and i<=799:
        m[1]=m[1]+1
    elif i>=800 and i<=1199:
        m[2]=m[2]+1
    elif i>=1200 and i<=1599:
        m[3]=m[3]+1
    elif i>=1600 and i<=1999:
        m[4]=m[4]+1
    elif i>=2000 and i<=2399:
        m[5]=m[5]+1
    elif i>=2400 and i<=2799:
        m[6]=m[6]+1
    elif i>=2800 and i<=3199:
        m[7]=m[7]+1
    else:
        t=t+1
print(max([len(m)-m.count(0),1]), end=" ")
print(len(m)-m.count(0)+t)