from itertools import permutations
n=int(input())
a=list(input())
b=list(input())
s=""
q=""
for i in a:
    if i==" ":
        a.remove(i)
for i in a:
    s=s+i
a.sort()
l=a
for i in b:
    if i==" ":
        b.remove(i)
for i in b:
        q=q+i
per=["".join(p) for p in permutations(l)]

k=per.index(s)
j=per.index(q)
print(abs(int(k-j)))