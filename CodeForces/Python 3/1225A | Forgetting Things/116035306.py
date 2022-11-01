a,b=map(int,input().split())
if a==9 and b==1:
    print(9,10)
elif b-a>1 or b-a<0:
    print(-1)
else:
    if a==b:
        s=str(a)+"01"
        q=str(a)+"02"
        print(s,q)
    else:
        s = str(a) + "99"
        q = str(b) + "00"
        print(s,q)