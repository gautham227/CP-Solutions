a,b,c,d=input().split()
a=int(a)
b=int(b)
c=int(c)
d=int(d)
if d<a:
    print(d)
elif d<a+b:
    print(a)
else:
    print(a-(d-a-b))