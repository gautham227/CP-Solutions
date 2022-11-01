n=int(input())
s=str(input())
h=0
for i in range(1,len(s)):
    if s[i]==s[i-1]:
        h=h+1
print(h)