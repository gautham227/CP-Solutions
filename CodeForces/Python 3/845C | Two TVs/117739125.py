#coded by gautham on 29/5/2021
n=int(input())
l=[]
k=0
for i in range(0,n):
    a,b=map(int,input().split())
    l.append((a,b))
l.sort()
tv1on=-1
tv2on=-1
for i in range(0,n):
    if tv1on<l[i][0]:
        tv1on=l[i][1]
    elif tv2on<l[i][0]:
        tv2on=l[i][1]
    else:
        k=1
        break
if k==0:
    print("YES")
else:
    print("NO")