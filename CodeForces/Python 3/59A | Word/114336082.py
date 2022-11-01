s=str(input())
k=0
for i in s:
    if i.islower():
        k=k+1
if k>=len(s)-k:
    print(s.lower())
else:
    print(s.upper())