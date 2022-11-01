s=str(input())
a=s.count("o")
b=s.count("x")
c=s.count("?")
if a>4:
    print(0)
elif a==4:
    print(24)
elif a==3:
    print(36+24*c)
elif a==2:
    print(6+36*c+int(12*c*(c-1))+8)
elif a==1:
    print(1+4*c+6*c*(c-1)+6*c+4*c*(c-1)*(c-2)+12*c*(c-1)+4*c)
elif a==0:
    print(c*(c-1)*(c-2)*(c-3)+6*c*(c-1)*(c-2)+7*c*(c-1)+c)