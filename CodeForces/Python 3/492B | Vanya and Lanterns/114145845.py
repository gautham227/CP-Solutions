a,b=map(int,input().split())
l=list(map(int,input().split()))
l.sort()
g=[]
g.append(2*(l[0]-0))
g.append(2*(b-l[-1]))
for i in range(1,len(l)):
    g.append(l[i]-l[i-1])
print("{0:.10f}".format(max(g)/2))