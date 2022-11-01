t=int(input())
for o in range(0,t):
    a,b=map(int,input().split())
    l=list(input())
    p=[]
    a=a-l.count("0")
    b=b-l.count("1")
    for i in range(0,int(len(l))):
        if l[i]=="?":
            if l[-1-i]!="?":
                l[i]=l[-1-i]
                if l[i]=="0":
                    a=a-1
                else:
                    b=b-1
        else:
            if l[-1-i]=="?":
                l[-1-i]=l[i]
                if l[i]=="0":
                    a=a-1
                else:
                    b=b-1
    for i in range(0,len(l)):
        if l[i]=="?":
            if a>=b:
                    l[i]=0
                    l[-1-i]=0
                    if len(l)%2!=0 and len(l)==i+abs(-i-1):
                        a=a-1
                    else:
                        a=a-2
            else:
                l[i]=1
                l[-1-i]=1
                if len(l)%2!=0 and len(l)==i+abs(-i-1):
                    b=b-1
                else:
                    b=b-2
    m=list(l)
    m.reverse()
    if l==m and a==0 and b==0:
        s=""
        for i in l:
            s=s+str(i)
        print(s)
    else:
        print(-1)
            