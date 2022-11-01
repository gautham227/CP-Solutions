t=int(input())
for i in range(0,t):
    a,b=map(int,input().split())
    if b==0:
        for i in range(1,a+1):
            print(i, end=" ")
    else:
        if (a-1)//2<b:
            print(-1)
        else:
            l=[]
            for i in range(1,a+1):
                l.append(i)
            for i in range(1,a+1):
                if i%2==0 and b>0:
                    print(l[-1],end=" ")
                    l.pop(-1)
                    b=b-1
                else:
                    print(l[0],end=" ")
                    l.pop(0)
        