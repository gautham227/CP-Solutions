#coded by gautham on 19/6
n=int(input())
for i in range(1,1000000000):
    if (i*(i+1))//2>=n:
        print(i)
        break
