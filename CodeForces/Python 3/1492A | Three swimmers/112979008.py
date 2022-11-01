t=int(input())
for i in range(0,t):
    a,b,c,d=map(int,input().split())
    if a%b==0 or a%c==0 or a%d==0:
        print(0)
    else:
        e=a//b+1
        f=a//c+1
        g=a//d+1
        print(min([e*b-a,f*c-a,g*d-a]))
        