t=int(input())
for i in range(0,t):
    px,py=map(int,input().split())
    s=str(input())
    n=1
    if px>=0:
        if s.count("R")>=px:
            n=1
        else:
            print("NO")
            continue
    else:
        if s.count("L")>=abs(px):
            n=1
        else:
            print("NO")
            continue
    if py>=0:
        if s.count("U")>=py:
            n=n+1
        else:
            print("NO")
            continue
    else:
        if s.count("D")>=abs(py):
            n=n+1
        else:
            print("NO")
            continue
    if n==2:
        print("YES")
    