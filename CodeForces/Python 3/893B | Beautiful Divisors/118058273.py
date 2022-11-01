l=[1, 6, 28, 120, 496, 2016, 8128, 32640]
l.reverse()
n=int(input())
for i in l:
    if n%i==0:
        print(i)
        break