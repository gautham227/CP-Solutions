#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,n,r;
	    cin>>x>>y>>n>>r;
	    if(n*x>r){
	        cout<<-1<<endl;
	        continue;
	    }
	    int diff=y-x;
	    r-=n*x;
	    int an2=r/diff;
	    an2=min(an2,n);
	    cout<<n-an2<<" "<<an2<<endl;
	}
	return 0;
}
