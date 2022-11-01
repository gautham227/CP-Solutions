t=int(input())
for i in range(0,t):
    n=int(input())
    if n==1:
        print(0)
        continue
    elif n==2:
        print(0)
        continue
    if n%2==0:
        print(n//2-1)
    else:
        print(n//2)