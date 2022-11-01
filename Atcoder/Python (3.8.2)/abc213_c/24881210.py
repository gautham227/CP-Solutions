def bs(arr, low, high, x):
    if high >= low:
        mid = (high + low) // 2
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return bs(arr, low, mid - 1, x)
        else:
            return bs(arr, mid + 1, high, x)
    else:
        return -1
h,w,n=map(int,input().split())
r=[]
c=[]
l=[]
for i in range(0,n):
    a,b=map(int,input().split())
    r.append(a)
    c.append(b)
    l.append([a,b])
r=set(r)
c=set(c)
r=list(r)
c=list(c)
r.sort()
c.sort()
for i in l:
    print(bs(r,0,len(r)-1,i[0])+1,end=" ")
    print(bs(c,0,len(c)-1,i[1])+1)
