t=int(input())
l={}
for i in range(0,t):
    s=str(input())
    if s not in l:
        print("OK")
        l[s]=1
    else:
        w=s+str(l[s])
        print(w)
        l[s]=l[s]+1
 
 