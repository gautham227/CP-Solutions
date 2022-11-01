l=list(input())
if len(l)<=2:
    print("YES")
else:
    for i in range(0,len(l)):
        l[i]=ord(l[i])-65
    if l[2]==((l[0]+l[1])%26):
        print("YES")
    else:
        print("NO")