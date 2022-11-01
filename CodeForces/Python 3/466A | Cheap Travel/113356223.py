n,m,a,b=map(int,input().split())
#n- no of travels m- no of time in spl ticket a- price of single ticket b-price of spl ticket
if b/m<a:
    s=n//m
    p=min(b,(n-s*m)*a)
    print(min(n*a,s*b+p))
else:
    print(n*a)