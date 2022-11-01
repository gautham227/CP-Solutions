#coded by gautham on 29/5/2021
n,a,b=map(int,input().split())
x=n//(a+b)
y=n%(a+b)
if y>a:
    print(x*a+a)
else:
    print(x*a+y)
