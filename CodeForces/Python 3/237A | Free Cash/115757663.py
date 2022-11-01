n=int(input())
dict={}
for i in range(0,n):
    s=str(input())
    try:
        dict[s]=dict[s]+1
    except:
        dict[s]=1
print(max(dict.values()))