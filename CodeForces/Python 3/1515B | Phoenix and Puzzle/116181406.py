import math
t=int(input())
for i in range(0,t):
    a=int(input())
    if a%2==0:
        if (a/2)**(0.5)==int((a/2)**(0.5)):
            print("YES")
        elif (a/4)**(0.5)==int((a/4)**(0.5)):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")