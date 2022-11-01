s=list(input())
a=s[0]
s.pop(0)
s.append(a)
d=""
for i in s:
    d=d+i
print(d)