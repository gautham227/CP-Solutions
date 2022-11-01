#coded by gautham on 20/6
n,k=map(int,input().split())
s=list(input())
l=list(input().split())
s1=""
for i in range(0,n):
    if s[i] in l:
        s1=s1+"1"
    else:
        s1=s1+"0"
c=0
fa=0
for i in s1:
    if i=="1":
        c=c+1
    else:
        fa=fa+((c*(c+1))//2)
        c=0
fa=fa+((c*(c+1))//2)
print(fa)