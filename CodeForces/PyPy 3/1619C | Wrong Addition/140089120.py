t=int(input())
for o in range(0,t):
        a,b=map(int ,input().split())
        s=""
        f=0
        while(a>0):
                x=a%10
                a=a//10
                if b==0:
                        f=1
                        break
                y=b%10
                b=b//10
                if y>=x:
                        s=s+str(y-x)
                else:
                        if b==0:
                                f=1
                                break
                        y=(b%10)*10+y
                        b=b//10
                        if (y-x)>9 or (y-x)<0:
                                f=1
                                break
                        s=s+str(y-x)
 
        if f==1:
                print(-1)
        else:
                s=s[::-1]
                z=str(b)+s
                print(int(z))
 