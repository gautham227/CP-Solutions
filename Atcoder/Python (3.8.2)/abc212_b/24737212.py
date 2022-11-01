s=str(input())
if (s[0]==s[1]==s[2]==s[3]):
    print("Weak")
else:
    if ((int(s[1])==0 and int(s[0])==9) or (int(s[1])==int(s[0])+1)) and ((int(s[2])==0 and int(s[1])==9) or (int(s[2])==int(s[1])+1)) and ((int(s[3])==0 and int(s[2])==9) or (int(s[3])==int(s[2])+1)):
        print("Weak")
    else:
        print("Strong")