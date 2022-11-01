t=int(input())
for i in range(0,t):
    s=str(input())
    if len(s)<=10:
        print(s)
        continue
    else:
        l=""
        l=s[0]+str(len(s)-2)+s[-1]
        print(l)
 