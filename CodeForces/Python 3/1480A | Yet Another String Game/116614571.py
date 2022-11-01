t=int(input())
for o in range(0,t):
    l=list(input())
    s=""
    for i in range(0,len(l)):
        if i%2==0:
            if l[i]=="a":
                l[i]="b"
            else:
                l[i]="a"
        else:
            if l[i]=="z":
                l[i]="y"
            else:
                l[i]="z"
    for i in l:
        s=s+i
    print(s)