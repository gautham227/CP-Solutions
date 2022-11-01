s=list(input())
if "[" not in s or "]" not in s:
    print(-1)
elif s.index("[")+1>len(s)-s[::-1].index("]"):
    print(-1)
else:
    k=0
    while s[0]!="[":
        s.pop(0)
    s.reverse()
    while s[0] != "]":
        s.pop(0)
    if s.count(":")<2:
        print(-1)
    else:
        while s[0]!=":":
            s.pop(0)
        s.reverse()
        while s[0]!=":":
            s.pop(0)
        print(s.count("|")+4)