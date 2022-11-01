t=int(input())
for o in range(0,t):
    n=int(input())
    if n==1:
        print(1)
        continue
    elif n==2:
        print(-1)
        continue
    else:
        if n%2==0:
            l=[]
            a=[]
            b=[]
            for i in range(0,n):
                l.append([])
            s=n**2
            g=0
            for i in range(1,s//2+1):
                a.append(i)
            for i in range( s // 2 + 1,s+1):
                b.append(i)
 
            for i in l:
                k=0
                while k<n:
                    if k%2==0:
                        i.append(a[0])
                        a.pop(0)
                        k=k+1
                    else:
                        i.append(b[0])
                        b.pop(0)
                        k=k+1
        else:
            l = []
            a = []
            b = []
            for i in range(0, n):
                l.append([])
            s = n ** 2
            g = 0
            for i in range(1, s // 2 + 2):
                a.append(i)
            for i in range(s // 2 + 2, s + 1):
                b.append(i)
            g=0
            for i in l:
                k = 0
                while k < n:
                    if g % 2 == 0:
                        i.append(a[0])
                        a.pop(0)
                        k = k + 1
                        g=g+1
                    else:
                        i.append(b[0])
                        b.pop(0)
                        k = k + 1
                        g=g+1
    for i in l:
        for j in range(0,n-1):
            print(i[j],end=" ")
        print(i[-1])
 
 