#coded by gautham on 25/6
import math
n=int(input())
l=["Sheldon", "Leonard", "Penny", "Rajesh", "Howard"]
k=1
while n>k*5:
    n=n-5*k
    k=k*2
s=math.ceil(n/k)
print(l[s-1])