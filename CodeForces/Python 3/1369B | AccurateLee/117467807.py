#coded by gautham on 27/5/21
t=int(input())
for i in range(0,t):
    n=int(input())
    s=str(input())
    l=list(s)
    inc=0
    for i in range(0,len(l)-1):
        if l[i]=="1" and l[i+1]=="0":
            inc=1
            break
    if inc==0:
        print(s)
    else:
        a=l.index("1")
        b=l[::-1].index("0")
        x="0"*(a+1)+"1"*b
        print(x)