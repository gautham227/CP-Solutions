n=int(input())
s=str(n)
l=len(s)
if l%2==0:
    if s[int(l/2):l]>=s[0:int(l/2)]:
        u=int(s[0:int(l/2)])
        print(u)
    else:
        u=int(s[0:int(l/2)])
        print(u-1)
else:
    if l>2:
        print(int((l//2)*"9"))
    else:
        print(0)