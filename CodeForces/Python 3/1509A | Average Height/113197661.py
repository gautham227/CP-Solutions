t=int(input())
for i in range(0,t):
    n=int(input())
    l=list(map(int,input().split()))
    s=[]
    m=[]
    for i in l:
        if i%2!=0:
            s.append(i)
        else:
            m.append(i)
    for i in s:
        print(i,end=" ")
    for j in range(0,len(m)-1):
        print(m[j],end=" ")
    if len(m)>=1:
        print(m[-1])
            
    
            