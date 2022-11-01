t=int(input())
a="blue"
b="unlock"
for i in range(0,t):
    s=str(input())
    if s=="unlock" or s=="lock":
        b=s
    else:
        if b=="unlock":
            a=s
print(a)