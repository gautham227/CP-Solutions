t=int(input())
for i in range(0,t):
    p=[]
    n=int(input())
    l=list(map(int,input().split()))
    n=n//2
    print(n)
    for i in range(0,len(l)-1,2):
        if l[i]>l[i+1]:
            print(i+1,i+2,l[i+1],10**9+7)
        else:
            print(i+1, i + 2, l[i], 10 ** 9 + 7)