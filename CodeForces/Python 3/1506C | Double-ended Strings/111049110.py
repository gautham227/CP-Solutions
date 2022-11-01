t=int(input())
for i in range(0,t):
    a=str(input())
    b=str(input())
    p=[a[i: j] for i in range(len(a))
          for j in range(i + 1, len(a) + 1)]
    q=[b[i: j] for i in range(len(b))
          for j in range(i + 1, len(b) + 1)]
    e=[]
    for i in p:
        if i in q:
            e.append(len(i))
    if e==[]:
        m=0
    else:
        m=max(e)
    print(len(a)+len(b)-m-m)