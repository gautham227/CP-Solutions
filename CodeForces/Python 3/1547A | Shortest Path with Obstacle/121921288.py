#coded by gautham on 10/7
t=int(input())
for i in range(0,t):
    q=input()
    a1,b1=map(int,input().split())
    a2, b2 = map(int, input().split())
    a3, b3 = map(int, input().split())
    if (b1==b3 and b1==b2) and ((a3<a1 and a3>a2) or (a3>a1 and a3<a2)):
        print(abs(a2-a1)+abs(b2-b1)+2)
    elif (a1==a2 and a1==a3) and ((b3<b1 and b3>b2) or (b3>b1 and b3<b2)):
        print(abs(a2 - a1) + abs(b2 - b1) + 2)
    else:
        print(abs(a2-a1)+abs(b2-b1))