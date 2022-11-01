l=list(input())
s=""
for i in range(0, len(l)):
    if l[i]=="6":
        l[i]="9"
    elif l[i]=="9":
        l[i]="6"
l.reverse()
for i in l:
    s=s+i
print(s)