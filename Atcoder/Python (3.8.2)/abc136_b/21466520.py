n=int(input())
if (n < 10) :
        print(n); 
elif (n / 10 < 10) :
    print(9); 
elif (n / 100 < 10) :
    print(9+n-99); 
elif (n/1000<10) :
    print( 9 + 900); 
elif (n / 10000 < 10) : 
    print(909 + n - 9999); 
else :
    print(90909); 