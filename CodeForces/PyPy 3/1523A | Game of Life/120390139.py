#coded by gautham on 23/6
t=int(input())
for _ in range(0, t):
    a,b=map(int,input().split())
    s=str(input())
    for i in range(min(a, b)):
        while "101" in s:
            s=s.replace("101","1N1")
        s=s.replace("10","11")
        s=s.replace("01","11")
    s=s.replace("N","0")
    print(s)