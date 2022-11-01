n=int(input())
l=[]
for i in range(0,n):
    a=int(input())
    l.append(a)
l.sort()
s=sum(l)
k=0
if s%10!=0:
    print(s)
else:
    for i in l:
        if i%10!=0:
            print(s-i)
            k=1
            break
    if k==0:
        print(0)
