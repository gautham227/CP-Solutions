t=int(input())
l=[]
p=['kkkkkkkkkkkkkkkkkkkh', 'kkkkkkkkkkkkkkkkkkh', 'kkkkkkkkkkkkkkkkkh', 'kkkkkkkkkkkkkkkkh', 'kkkkkkkkkkkkkkkh', 'kkkkkkkkkkkkkkh', 'kkkkkkkkkkkkkh', 'kkkkkkkkkkkkh', 'kkkkkkkkkkkh', 'kkkkkkkkkkh', 'kkkkkkkkkh', 'kkkkkkkkh', 'kkkkkkkh', 'kkkkkkh', 'kkkkkh', 'kkkkh', 'kkkh', 'kkh', 'kh']
for i in range(0,t):
    s=str(input())
    a=s.replace("u","oo")
    for j in p:
        if j in s:
            a=a.replace(j,"h")
    if a not in l:
        l.append(a)
print(len(l))