a=list(input())
b=list(input())
s=""
for i in range(0,len(a)):
    if a[i]==b[i]:
        s=s+"0"
    else:
        s=s+"1"
print(s)