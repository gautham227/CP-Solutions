#include <bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if (a>0 && b>0){
		if (a>b){
			cout<<">"<<endl;
		}
		else if (b>a){
			cout<<"<"<<endl;
		}
		else{
			cout<<"="<<endl;
		}
	}
	else{
		if (c%2==0){
			if (pow(a,2)>pow(b,2)){
				cout<<">"<<endl;
			}
			else if (pow(a,2)<pow(b,2)){
				cout<<"<"<<endl;
			}
			else{
				cout<<"="<<endl;
			}
		}
		else{
			if (a>b){
			cout<<">"<<endl;
		}
		else if (b>a){
			cout<<"<"<<endl;
		}
		else{
			cout<<"="<<endl;
		}
		}
	}	
}