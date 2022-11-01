t=int(input())
for i in range(0,t):
    u=int(input())
    l=list(map(int,input().split()))
    i1=l.index(min(l))+1
    i2=l.index(max(l))+1
    print(min([max([i1,i2]),u+1-min([i1,i2]),min([i1,i2])+u+1-max([i1,i2])]))