n=int(input())
a=0
b=0
c=0
d=0
for i in range(0,n):
    s=str(input())
    if s=="AC":
        a=a+1
    elif s=="WA":
        b=b+1
    elif s=="TLE":
        c=c+1
    else:
        d=d+1
print("AC x",a)
print("WA x",b)
print("TLE x",c)
print("RE x",d)