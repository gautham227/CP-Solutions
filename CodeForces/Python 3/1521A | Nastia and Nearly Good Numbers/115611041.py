t=int(input())
for i in range(0,t):
    a,b=map(int,input().split())
    if a==1 and b==1:
        print("NO")
    elif a==b and b!=1:
        print("YES")
        print(a,2*a*b-a,2*a*b)
        continue
    elif a==1:
        print ("YES")
        print(a,2*b-a,2*b)
        continue
    elif b==1:
        print("NO")
        continue
    elif a>b:
        print("YES")
        print(a,2*a*b-a,2*a*b)
        continue
    else:
        print("YES")
        print(a,a*b-a,a*b)
        continue
 