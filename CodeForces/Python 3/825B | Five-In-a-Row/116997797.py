#done by gautham
l=[]
s=[]
d=[]
w=""
r=0
for i in range(0,10):
    l.append(str(input()))
for i in l:
    for j in range(0,6):
        if i[j:j+5].count("X")==4 and i[j:j+5].count(".")==1:
            r=1
            break
if r!=1:
    for i in range(0,10):
        for j in l:
            w=w+j[i]
        s.append(w)
        w=""
    for i in s:
        for j in range(0, 6):
            if i[j:j + 5].count("X") == 4 and i[j:j + 5].count(".") == 1:
                r = 1
                break
    if r!=1:
        for i in range(0,6):
            s=""
            for j in range(0,6):
                s=l[i][j]+l[i+1][j+1]+l[i+2][j+2]+l[i+3][j+3]+l[i+4][j+4]
                d.append(s)
                s=""
                s=l[i][j+4]+l[i+1][j+3]+l[i+2][j+2]+l[i+3][j+1]+l[i+4][j]
                d.append(s)
        for i in d:
            if i.count("X")==4 and i.count(".")==1:
                r=1
                break
if r==1:
    print("YES")
else:
    print("NO")