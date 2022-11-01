a,b=map(int,input().split())
for i in range(0,b):
    if a%200==0:
        a=int(a/200)
    else:
        a=int(str(a)+"200")
print(a)