t=int(input())
for i in range(0,t):
    n=int(input())
    s=list(str(input()))
    c0=s.count("0")
    if c0==1:
        print("BOB")
    elif c0%4==0:
        print("BOB")
    elif c0%4==1:
        print("ALICE")
    elif c0%4==2:
        print("BOB")
    else:
        print("ALICE")