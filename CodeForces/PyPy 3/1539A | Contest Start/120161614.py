t=int(input())
for i in range(0,t):
    n,x,t=map(int,input().split())
    g=t//x
    if n<=g:
        print((n-1)*n//2)
    else:
        print((g)*(n-(g))+((g-1)*g//2))