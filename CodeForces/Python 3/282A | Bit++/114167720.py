n=int(input())
x=0
for i in range(0,n):
    s=str(input())
    if "++" in s:
        x=x+1
    else:
        x=x-1
print(x)
 