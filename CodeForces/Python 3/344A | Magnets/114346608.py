n=int(input())
a=int(input())
s=1
for i in range(0,n-1):
    b=int(input())
    if b!=a:
        s=s+1
    a=b
print(s)
 