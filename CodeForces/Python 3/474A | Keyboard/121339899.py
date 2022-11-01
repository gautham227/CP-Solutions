a="qwertyuiop"
b="asdfghjkl;"
c="zxcvbnm,./"
d=str(input())
s=str(input())
k=""
if d=="R":
    for i in s:
        if i in a:
            k=k+a[a.index(i)-1]
        elif i in b:
            k=k+b[b.index(i)-1]
        elif i in c:
            k=k+c[c.index(i)-1]
else:
    for i in s:
        if i in a:
            k=k+a[a.index(i)+1]
        elif i in b:
            k=k+b[b.index(i)+1]
        elif i in c:
            k=k+c[c.index(i)+1]
print(k)