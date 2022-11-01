#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
int main(){
 int t,k,a,b;
 cin>>t;
 for (int i=0;i<t;i++){
  std::vector<int> v;
  for (int j=0;j<4;j++){
   cin>>k;
   v.push_back(k);
  }
  std::vector<int> v2;
  v2.assign(v.begin(),v.end());
  sort(v2.begin(),v2.end());
  std::vector<int> v3{v2[2],v2[3]};
  a=max(v[0],v[1]);
  b=max(v[2],v[3]);
  std::vector<int> v4{a,b};
  sort(v4.begin(),v4.end());
  if (v3==v4){
   cout<<"YES"<<endl;
 
  }
  else{
   cout<<"NO"<<endl;
  }
 }
 }