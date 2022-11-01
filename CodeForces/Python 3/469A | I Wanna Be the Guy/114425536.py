k=int(input())
p=list(map(int,input().split()))
q=list(map(int,input().split()))
s=set()
s=s.union(p[1:],q[1:])
if len(s)==k:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")