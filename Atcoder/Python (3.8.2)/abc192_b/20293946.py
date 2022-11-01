s=str(input())
l=len(s)
n=0
for i in range(0,l):
    if i%2==0:
        if s[i].islower():
            n=n+1
    else:
        if s[i].isupper():
            n=n+1
if n==l:
    print("Yes")
else:
    print("No")
            