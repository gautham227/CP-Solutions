t=int(input())
for i in range(0,t):
    a,b=map(int,input().split())
    l=list(map(int,input().split()))
    if sum(l)!=b:
        print("YES")
        s=0
        k=[]
        for i in l:
            if s+i != b:
                s=s+i
                print(i,end=" ")
            else:
                k.append(i)
        for i in k:
            print(i,end=" ")
    else:
        print("NO")