t=int(input())
for i in range(0,t):
    r=0
    n=int(input())
    p=int(n)
    if n<=10:
        print("NO")
        continue
    if n%11==0 or n%111==0 or n%1111==0 or n%11111==0 or n%111111==0 or n%1111111==0 or n%11111111==0 or n%111111111==0:
        print("YES")
    else:
        while n>=111:
            n=n-111
            if n%11==0:
                r=1
                break
        if r==1:
            print("YES")
        else:
            print("NO")