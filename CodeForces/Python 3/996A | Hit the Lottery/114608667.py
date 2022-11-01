n=int(input())
a=n//100
b=(n-a*100)//20
c=(n-a*100-b*20)//10
d=(n-a*100-b*20-c*10)//5
e=(n-a*100-b*20-c*10-d*5)
print(a+b+c+d+e)