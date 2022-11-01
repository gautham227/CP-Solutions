a,b,c=map(int,input().split())
if a>=0 and b>=0:
    if a>b:
        print(">")
    elif b>a:
        print("<")
    else:
        print("=")
else:
    if c%2==0:
        if a**2 > b**2:
            print(">")
        elif a**2 < b**2:
            print("<")
        else:
            print("=")
    else:
        if a>b:
            print(">")
        elif b>a:
            print("<")
        else:
            print("=")