n=int(input())
s=n//2
print(s)
if n%2==0:
    for i in range(0,s-1):
        print(2,end=" ")
    print(2)
else:
    for i in range(0,s-1):
        print(2,end=" ")
    print(3)