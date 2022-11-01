#include <iostream>
using namespace std;
int main()
{
    int a,b,c,s,k;
    cin>>a>>b>>c;
    s=(c*(c+1))/2;
    k=(s*a)-b;
    if (k>0){
        cout<< k <<endl;
        return 0;
    }
    else {
        cout<<0<<endl;
        return 0;
    }
}