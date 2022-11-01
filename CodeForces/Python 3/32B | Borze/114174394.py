s=str(input())
q=""
i=0
while i<len(s):
    if s[i]==".":
        q=q+"0"
        i=i+1
    elif s[i]=="-":
        if s[i+1]=="-":
            q=q+"2"
            i=i+2
        else:
            q=q+"1"
            i=i+2
print(q)