a,b=map(int,input().split())
l=list(map(int,input().split()))
m=10000000000
s = 0
p=0
for i in range(1,1001):
    x=0
    for j in range(0,a):
        h=i+j*b
        if l[j]==h:
            x=x+1
    if x>=s:
        p=i
        s=x
print(a-s)
for i in range(0,a):
        s=""
        if p+i*b-l[i]==0:
            continue
        elif p+i*b-l[i]>0:
            s="+ "+str(i+1)+" "+str(abs(p+i*b-l[i]))
        else:
            s="- "+str(i+1)+" "+str(abs(p+i*b-l[i]))
        print(s)