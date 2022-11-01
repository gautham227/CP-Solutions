n=int(input())
for i in range(0,n):
    s=str(input())
    l=len(s)
    a=s.count("0")
    m=min(a,l-a)
    if m%2==1:
        print("DA")
    else:
        print("NET")