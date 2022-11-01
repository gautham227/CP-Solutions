n=int(input())
a="I hate it"
ao="I hate that"
b="I love it"
bo="I love that"
s=""
for i in range(1,n):
    if i%2!=0:
        s=s+" "+ao
    else:
        s=s+" "+bo
if n%2==0:
    s=s+" "+b
else:
    s=s+" "+a
s=s.lstrip()
print(s)