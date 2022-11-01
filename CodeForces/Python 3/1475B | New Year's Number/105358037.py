t=int(input())
for i in range(0,t):
    m=0
    n=int(input())
    for j in range(0,500):
        if n%2020==0:
            m=m+1
            break
        else:
            n=n-2021
            if n<2020 and n!=0:
                break
    if m>0:
        print("YES")
    else:
        print("NO")