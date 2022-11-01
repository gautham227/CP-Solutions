def gcd(a, b):
    if a == 0:
        return b
    return gcd(b % a, a)
def lcm(a, b):
    return (a / gcd(a, b)) * b
a=int(input())
l=[]
for i in range(1,int(a**(0.5))+1):
    if a%i==0:
        l.append(i)
m=1000000000000000
x,y=0,0
for i in l:
    if lcm(i,a//i)==a:
        if max(i,a//i)<m:
            m=max(i,a//i)
            x=i
            y=a//i
print(min(x,y),m)