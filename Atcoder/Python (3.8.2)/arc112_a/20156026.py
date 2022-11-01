t=int(input())
for i in range(0,t):
    l,r=input().split()
    l=int(l)
    r=int(r)
    if r<2*l:
        print(0)
    else:
        z=r+1-(2*l)
        print(int((z*(z+1))/2))