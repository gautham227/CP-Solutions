t=int(input())
for i in range(0,t):
    n=int(input())
    a=0
    b=0
    k=0
    for i in range(2,int(n**(0.5))+1):
        if n%i==0:
            a=i
            k=1
        if k==1:
            break
    if k==0:
        print("NO")
        continue
    n=n//a
    for i in range(a+1,int(n**(0.5))+1):
        if n%i==0:
            b=i
            k=k+1
        if k==2:
            break
    if k==1:
        print("NO")
        continue
    n=n//b
    if n>b:
        print("YES")
        print(a,b,n)
    else:
        print("NO")