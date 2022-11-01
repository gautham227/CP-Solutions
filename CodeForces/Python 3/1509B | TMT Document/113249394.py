t=int(input())
for i in range(0,t):
    n=int(input())
    s=str(input())
    m=s.count("T")
    n=s.count("M")
    y=0
    if 2*n!=m:
        print("NO")
        continue
    else:
        h=[]
        for i in range(0,len(s)):
            if s[i]=="M":
                h.append(i+1)
        p=0 #no of m
        q=0 #no of m before
        #i-p no of t
        #p no of m
        for i in h:
            p=p+1
            if i-p<p or n-p+1>m+p-i:
                y=1
                break
    if y==1:
        print("NO")
    else:
        print("YES")