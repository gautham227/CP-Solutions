l=[]
a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=list(map(int,input().split()))
d=list(map(int,input().split()))
e=list(map(int,input().split()))
l=[a,b,c,d,e]
ma=0
for i in range(0,5):
    for j in range(0, 5):
        for k in range(0, 5):
            for n in range(0, 5):
                for m in range(0, 5):
                    if i==j or i==k or i==n or i==m or j==k or j==n or j==m or k==n or k==m or m==n:
                        continue
                    else:
                        t=l[i][j]+l[j][i]+l[j][k]+l[k][j]+2*(l[k][n]+l[n][k]+l[n][m]+l[m][n])
                        ma=max(ma,t)
print(ma)