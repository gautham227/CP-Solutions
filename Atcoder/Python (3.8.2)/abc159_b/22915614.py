s=str(input())
k=str(s)
a=s[0:len(s)//2]
x=str(a)
b=s[len(s)//2+1:]
y=str(b)
if s==k[::-1] and a==x[::-1] and b==y[::-1]:
    print("Yes")
else:
    print("No")