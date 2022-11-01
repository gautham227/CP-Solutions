a,b=map(int,input().split())
l=[]
r=-1
for i in range(0,b):
    k=int(input())
    if k%a+1 in l:
        if r==-1:
            r=i+1
    else:
        l.append(k%a+1)
print(r)