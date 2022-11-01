#written by gautham on 18-5-2021
t=int(input())
for i in range(0,t):
    a,b=map(int,input().split())
    l=list(map(int,input().split()))
    if a==b:
        if sum(l)%2!=0:
            print("Yes")
        else:
            print("No")
    else:
        x=0 #no of odd nos in list
        y=0 #no of even nos in list
        for i in l:
            if i%2==0:
                y=y+1
            else:
                x=x+1
        if x==0:
            print("No")
            continue
        elif y==0:
            if b%2==0:
                print("No")
            else:
                print("Yes")
        elif y>=b-1:
            print("Yes")
        else:
            if b%2==0:
                if y%2==0:
                    w=b-y+1
                    if x>=w:
                        print("Yes")
                    else:
                        print("No")
                else:
                    w=b-y
                    if x>=w:
                        print("Yes")
                    else:
                        print("No")
            else:
                if y%2==0:
                    w=b-y
                    if x>=w:
                        print("Yes")
                    else:
                        print("No")
                else:
                    w=b-y+1
                    if x>=w:
                        print("Yes")
                    else:
                        print("No")