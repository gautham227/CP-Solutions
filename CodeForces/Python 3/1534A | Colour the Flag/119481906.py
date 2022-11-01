t=int(input())
for o in range(0,t):
    a,b=map(int,input().split())
    l1=[]
    l2=[]
    s1=""
    s2=""
    for j in range(0,b):
        if  j%2==0:
            s1=s1+"R"
            s2=s2+"W"
        else:
            s1=s1+"W"
            s2=s2+"R"
    for i in range(0,a):
        if i%2==0:
            l1.append(s1)
            l2.append(s2)
        else:
            l1.append(s2)
            l2.append(s1)
    x=0
    y=0
    z=[]
    for i in range(0,a):
        l=str(input())
        z.append(l)
    for i in range(0,a):
        if x==1:
            break
        else:
            for j in range(0,b):
                if z[i][j]==".":
                    continue
                else:
                    if z[i][j]=="W":
                        if l1[i][j]!="W":
                            x=1
                            break
                    else:
                        if l1[i][j]!="R":
                            x=1
                            break
    for i in range(0,a):
        if y==1:
            break
        else:
            for j in range(0,b):
                if z[i][j]==".":
                    continue
                else:
                    if z[i][j]=="W":
                        if l2[i][j]!="W":
                            y=1
                            break
                    else:
                        if l2[i][j]!="R":
                            y=1
                            break
    if y==1 and x==1:
        print("NO")
    else:
        print("YES")
        if x==0:
            for i in l1:
                print(i)
        else:
            for i in l2:
                print(i)