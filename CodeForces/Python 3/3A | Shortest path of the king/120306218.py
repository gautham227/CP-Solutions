a=list(input())
b=list(input())
x=ord(b[0])-ord(a[0])
y=int(b[1])-int(a[1])
print(max(abs(x),abs(y)))
if x>=0:
    if y>=0:
        for i in range(0,min(x,y)):
            print("RU")
        if x>y:
            for i in range(0,x-y):
                print("R")
        else:
            for i in range(0,y-x):
                print("U")
    else:
        for i in range(0,min(x,abs(y))):
            print("RD")
        if x>abs(y):
            for i in range(0,x-abs(y)):
                print("R")
        else:
            for i in range(0,abs(y)-x):
                print("D")
else:
    if y>=0:
        for i in range(0,min(abs(x),y)):
            print("LU")
        if abs(x)>y:
            for i in range(0,abs(x)-y):
                print("L")
        else:
            for i in range(0,y-abs(x)):
                print("U")
    else:
        for i in range(0,min(abs(x),abs(y))):
            print("LD")
        if abs(x)>abs(y):
            for i in range(0,abs(x)-abs(y)):
                print("L")
        else:
            for i in range(0,abs(y)-abs(x)):
                print("D")