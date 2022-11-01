import math
a,b,c,d=map(int,input().split())
e=(c-a)**2+(d-b)**2
if math.floor(e**(0.5))==math.ceil(e**(0.5)):
    #means the given sides are adjacent
    if a==c:
        print(a+abs(d-b),b,a+abs(d-b),d)
    elif b==d:
        print(a,b+abs(c-a),c,b+abs(c-a))
    else:
        print(-1)
elif math.floor((e/2)**(0.5))==math.ceil((e/2)**(0.5)):
    #means the given sides are diagonally opposite
    if (b-d)**2==(c-a)**2:
        print(a,d,c,b)
    else:
        print(-1)
else:
    print(-1)