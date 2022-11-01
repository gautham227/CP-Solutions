#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	vector<int> l;
	vector<int> s;
	for (int i=1;i<=n;i++){
		cin>>m;
		l.push_back(m);
	} 

	sort(l.begin(),l.end());

	for (int i=1;i<=n;i++){
		s.push_back(i);
	}

	if (l==s){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}