s=list(input())
l=[]
if "h" in s:
    l.append(s.index("h"))
    if "e" in s[l[0]+1:]:
        l.append(s[l[0]+1:].index("e")+len(s[:l[0]+1]))
        if "l" in s[l[1]+1:]:
            l.append(s[l[1]+1:].index("l")+len(s[:l[1]+1]))
            if "l" in s[l[2]+1:]:
                l.append(s[l[2]+1:].index("l")+len(s[:l[2]+1]))
                if "o" in s[l[3]+1:]:
                    print("YES")
                else:
                    print("NO")
            else:
                print("NO")
        else:
            print("NO")
    else:
        print("NO")
else:
    print("NO")