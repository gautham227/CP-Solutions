#coded by gautham on 31/7
t=int(input())
for i in range(0,t):
    n=int(input())
    if n<=6:
        print(15)
    else:
        print((n+1)//2*5)