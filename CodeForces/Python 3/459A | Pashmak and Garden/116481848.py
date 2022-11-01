#written by gautham
a,b,c,d=map(int,input().split())
if a==c:
    print(a+abs(d-b),b,a+abs(d-b),d)
elif b==d:
    print(a, b + abs(c - a), c, b + abs(c - a))
elif abs(c-a)==abs(d-b):
    print(a, d, c, b)
else:
    print(-1)