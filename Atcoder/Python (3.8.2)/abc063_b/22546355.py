s=str(input())
l=[]
n=0
for i in s:
    if i in l:
        n=1
        break
    else:
        l.append(i)
if n==1:
    print("no")
else:
    print("yes")