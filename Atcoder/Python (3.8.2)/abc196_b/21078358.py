x=list(input())
d=""
if "." in x:
    c=x.index(".")
    for i in range(c,len(x)):
        x.pop(c)
else:
    pass
for j in x:
        d=d+j
print(int(d))