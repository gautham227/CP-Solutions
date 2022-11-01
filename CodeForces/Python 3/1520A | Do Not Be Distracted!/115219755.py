t=int(input())
for i in range(0,t):
    n=int(input())
    s=str(input())
    l=[]
    p=0
    for i in range(0,n):
        if s[i] not in l:
            l.append(s[i])
        else:
            if s[i-1]!=s[i]:
                p=1
                break
    if p==0:
        print("YES")
    else:
        print("NO")
 
 
 
 