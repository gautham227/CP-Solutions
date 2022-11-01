a=int(input())
b=int(input())
c=int(input())
l=[a,b,c]
if a==1 and b==1 and c==1:
    print(3)
elif l.count(1)==2:
    if a==b or b==c:
        print(2*max(l))
    else:
        print(max(l)+2)
elif l.count(1)==1:
    if a==1:
        l[1]=l[1]+1
        print(l[1]*l[2])
    elif b==1:
        if l[0]>l[2]:
            l[2]=l[2]+1
        else:
            l[0]=l[0]+1
        print(l[0]*l[2])
    else:
        l[1]=l[1]+1
        print(l[0]*l[1])
else:
    print(a*b*c)