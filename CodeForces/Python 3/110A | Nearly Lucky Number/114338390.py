s=str(input())
d=[4,7,44,47,74,77]
k=0
for i in s:
    if i=="4" or i=="7":
        k=k+1
if k in d:
    print("YES")
else:
    print("NO")
 