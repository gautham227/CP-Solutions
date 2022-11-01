import math
a,b=map(int,input().split())
c=math.log(b/a,1.5)
if math.ceil(c)==c:
    print(int(c+1))
else:
    print(math.ceil(c))