k,x=map(int,input().split())
if k==1:
    print(x)
else:
    for i in range(x-k+1,x):
        print(i,end=" ")
    for i in range(x,x+k-1):
        print(i,end=" ")
    print(x+k-1)