import math
a,b=map(int,input().split())
if b<=math.ceil(a/2):
    print(2*b-1)
else:
    print((b-math.ceil(a/2))*2)