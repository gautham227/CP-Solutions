t = int(input())
for i in range(0, t):
    n = int(input())
    l = list(map(int, input().split()))
    cnt=n-1
    a=[]
    b=[]
    c=[]
    for i in range(0, n - 1):
        h = l[i:]
        k = h.index(min(h))
        if (k % len(h) != 0):
            a.append(i+1)
            b.append(n)
            c.append(k%len(h))
            p = h[k:]+h[:k]
            l = l[:i] + p
        else:
            cnt=cnt-1
 
    print(cnt)
    for i in range(0,len(a)):
        print(a[i],b[i],c[i])