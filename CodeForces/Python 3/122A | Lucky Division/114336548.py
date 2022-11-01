l=[4,7,44,47,74,77,444,447,474,477,744,747,774,777]
n=int(input())
k=0
for i in l:
    if n%i==0:
        k=1
        break
if k==0:
    print("NO")
else:
    print("YES")