n = int(input())
p = [int(i) for i in input().split()]
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]
m = int(input())
c = [int(i) for i in input().split()]
s = []
for i in range(len(p)):
    s.append([p[i], a[i], b[i]])
s=sorted(s, key=lambda x: x[0])
idx=[0] * 4
l=[]
for i in range(len(c)):
    x=c[i]
    while idx[x] < len(p):
        if s[idx[x]][1] == x or s[idx[x]][2] == x:
            s[idx[x]][1] = 0
            s[idx[x]][2] = 0
            l.append(s[idx[x]][0])
            break
        idx[x] += 1
    if idx[x] == len(p):
        l.append(-1)
for i in l:
    print(i,end=" ")