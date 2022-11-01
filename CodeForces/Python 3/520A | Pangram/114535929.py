n=int(input())
s=str(input())
s=s.lower()
o=0
k="abcdefghijklmnopqrstuvwxyz"
for i in k:
    if i not in s:
        o=1
        break
if o==1:
    print("NO")
else:
    print("YES")