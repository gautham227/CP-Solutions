s=str(input())
s=s.lower()
l=list(s)
r=""
for i in l:
    if i=="a" or i=="e" or i=="i" or i=="o" or i=="u" or i=="y":
        continue
    else:
        r=r+"."+i
print(r)