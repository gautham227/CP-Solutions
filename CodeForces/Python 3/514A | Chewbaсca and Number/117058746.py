s=str(input())
l=list(s)
p=""
if int(l[0])>9-int(l[0]):
    if int(l[0])==9:
        l[0]=str(9)
    else:
        l[0]=str(9-int(l[0]))
for i in range(1,len(l)):
    if int(l[i])>9-int(l[i]):
        l[i]=str(9-int(l[i]))
for i in l:
    p=p+i
print(p)