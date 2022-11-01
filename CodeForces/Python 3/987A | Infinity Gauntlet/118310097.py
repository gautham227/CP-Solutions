m=int(input())
l=[]
for i in range(0,m):
    s=str(input())
    l.append(s)
l=set(l)
print(6-len(l))
if "purple" not in l:
    print("Power")
if "green" not in l:
    print("Time")
if "blue" not in l:
    print("Space")
if "orange" not in l:
    print("Soul")
if "red" not in l:
    print("Reality")
if "yellow" not in l:
    print("Mind")