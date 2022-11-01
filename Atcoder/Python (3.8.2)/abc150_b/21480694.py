n=int(input())
s=str(input())
l=0
for i in range(0,n-2):
    if s[i:(i+3)]=="ABC":
        l=l+1
print(l)