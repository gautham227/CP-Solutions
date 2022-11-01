s=str(input())
if len(s)==1:
    if s.islower():
        print(s.upper())
    else:
        print(s.lower())
else:
    if s.isupper() or s[1:].isupper():
        l=list(s)
        for i in range(0,len(l)):
            if l[i].islower():
                l[i]=l[i].upper()
            else:
                l[i]=l[i].lower()
        s=""
        for i in l:
            s=s+i
    print(s)