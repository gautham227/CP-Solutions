#coded by gautham on 27/5/21
s=str(input())
if "AB" not in s or "BA" not in s:
    print("NO")
else:
    x=s.index("AB")
    y=s.index("BA")
    l=list(s)
    r=0
    for i in range(x+2,len(l)-1):
        if l[i]=="B" and l[i+1]=="A":
            r=1
    for i in range(y+2,len(l)-1):
        if l[i]=="A" and l[i+1]=="B":
            r=1
    if r==1:
        print("YES")
    else:
        print("NO")