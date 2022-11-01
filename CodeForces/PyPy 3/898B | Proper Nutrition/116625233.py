a=int(input())
b=int(input())
c=int(input())
k=0
if a%b==0 or a%c==0:
    print("YES")
    if a%b==0:
        print(a//b,0)
    else:
        print(0,a//c)
elif a%2!=0 and (b%2==0 and c%2==0):
    print("NO")
elif b>a and c>a:
    print("NO")
else:
    c1=0
    c2=0
    if b > c:
        while a>b-1:
            a=a-b
            c1=c1+1
            if a%c==0:
                c2=a//c
                k=1
                break
    else:
        while a > c-1:
            a=a-c
            c2=c2+1
            if a%b==0:
                c1=a//b
                k=1
                break
    if k==1:
        print("YES")
        print(c1,c2)
    else:
        print("NO")