#done by gautham
l1=list(map(int,input().split()))
l2=list(map(int,input().split()))
l3=list(map(int,input().split()))
l=l1+l2+l3
p=[]
t=int(input())
for i in range(0,t):
    n=int(input())
    try:
        p.append(l.index(n))
    except:
        continue
if 0 in p and 1 in p and 2 in p:
    print("Yes")
elif 3 in p and 4 in p and 5 in p:
    print("Yes")
elif 6 in p and 7 in p and 8 in p:
    print("Yes")
elif 0 in p and 3 in p and 6 in p:
    print("Yes")
elif 1 in p and 4 in p and 7 in p:
    print("Yes")
elif 2 in p and 5 in p and 8 in p:
    print("Yes")
elif 0 in p and 4 in p and 8 in p:
    print("Yes")
elif 6 in p and 4 in p and 2 in p:
    print("Yes")
else:
    print("No")