n=int(input())
s=str(input())
l=list(s)
k=l.count("A")
if k>n-k:
    print("Anton")
elif k<n-k:
    print("Danik")
else:
    print("Friendship")