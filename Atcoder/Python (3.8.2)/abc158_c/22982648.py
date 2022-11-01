#coded by gautham on 29/5/2021
import math
a,b=map(int,input().split())
r=0
for i in range(1,1100):
    if math.floor(0.08*i)==a and math.floor(0.1*i)==b:
        r=1
        print(i)
        break
if r==0:
    print(-1)