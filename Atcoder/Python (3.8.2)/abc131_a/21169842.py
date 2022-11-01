l=list(input())
n=0
for i in range(0,len(l)-1):
    if l[i]==l[i+1]:
        n=n+1
        break
if n==0:
    print("Good")
else:
    print("Bad")