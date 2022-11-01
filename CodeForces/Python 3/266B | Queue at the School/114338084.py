a,b=map(int,input().split())
l=list(input())
i=0
for j in range(0,b):
    while i<a-1:
        if l[i]=="B" and l[i+1]=="G":
            l[i],l[i+1]=l[i+1],l[i]
            i=i+2
        else:
            i=i+1
    i=0
d=""
for i in l:
    d=d+i
print(d)