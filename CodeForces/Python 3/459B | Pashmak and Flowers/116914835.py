n=int(input())
l=list(map(int,input().split()))
l.sort()
print(l[-1]-l[0], end=" ")
a=1
b=1
for i in range(1,len(l)):
    if l[i]==l[0]:
        a=a+1
    else:
        break
for i in range(len(l)-2,-1,-1):
    if l[i]==l[-1]:
        b=b+1
    else:
        break
if l[0]==l[-1]:
    print(int(a*(a-1)/2))
elif a==1:
    print(b)
elif b==1:
    print(a)
else:
    print(a*b)