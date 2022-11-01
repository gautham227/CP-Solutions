#coded by gautham on 18/6
t=int(input())
for _ in range(0,t):
    n=int(input())
    if n & 1:
        print("Bob")
    else:
        x=0
        while (n%2==0):
            n=n//2
            x=x+1
        if n>1:
            print("Alice")
        else:
            if x%2==1:
                print("Bob")
            else:
                print("Alice")