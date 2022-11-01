t=int(input())
for i in range(0,t):
    n=int(input())
    s=100
    if 100%n==0:
        print(100//n)
    else:
        while (n%2==0 and s%2==0):
            n=n//2
            s=s//2
        while (n % 5 == 0 and s % 5 == 0):
            n=n//5
            s=s//5
        print(s)