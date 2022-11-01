s=str(input())
l=[]
for i in range(0,len(s),2):
    l.append(int(s[i]))
l.sort()
q=str(l[0])
for i in range(1,len(l)):
    q=q+"+"
    q=q+str(l[i])
print(q)