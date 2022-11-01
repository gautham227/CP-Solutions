#coded by gautham on 2/7
n=int(input())
for i in range(n):
    a=str(input())
    if len(a)==1 or a.count('0')==len(a)-1:
        print(1)
        print(a)
    else:
        print(len(a)-a.count('0'))
        for j in range(len(a)):
            if a[j]!='0':
                print(a[j]+'0'*(len(a)-(j+1)),end=' ')
            else:
                continue