s=str(input())
a=int(s[:2])
b=int(s[2:])
if (a>0 and a<13) and (b>0 and b<13):
    print("AMBIGUOUS")
elif (a>0 and a<13):
    print("MMYY")
elif (b>0 and b<13):
    print("YYMM")
else:
    print("NA")
