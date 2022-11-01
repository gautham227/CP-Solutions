l=list(map(int,input().split()))
m=max(l)
l.remove(m)
print(m-l[0],m-l[1],m-l[2])