a,b,c=input().split()
a=int(a)
b=int(b)
c=int(c)
if c==0:
    if a>b:
        print("Takahashi")
    else:
        print("Aoki")
else:
    if b>a:
        print("Aoki")
    else:
        print("Takahashi")