a,b,c,d=map(int,input().split())
s=str(input())
w=s.count("1")
x=s.count("2")
y=s.count("3")
z=s.count("4")
print(a*w+b*x+c*y+d*z)