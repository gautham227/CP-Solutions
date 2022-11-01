a=int(input())
b=int(input())
m=int(input())
n=int(input())
no=int(input())
if no-(m-1)*a-(n-1)*b>0:
    print(no-(m-1)*a-(n-1)*b,end=" ")
else:
    print(0,end=" ")
k=min([m,n])
j=0
l=0
dup=0
if k==m:
    j=a
    l=n
    dup=b
else:
    j=b
    l=m
    dup=a
if k*j>=no:
    print(no//k)
else:
    print(j+(no-j*k)//l)