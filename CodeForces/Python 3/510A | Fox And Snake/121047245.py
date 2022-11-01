#coded by gautham on 1/7
a,b=map(int,input().split())
c=1
for i in range(a):
    if i%2==0:
        print("#"*b)
    else:
        if c%2==1:
            print( ("."*(b-1)) + "#" )
        else:
            print( "#" + ("."*(b-1)) )
        c=c+1