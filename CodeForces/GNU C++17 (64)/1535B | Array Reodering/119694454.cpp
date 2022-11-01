// Created by: G Gautham Krishna
#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cmath>
 
using namespace std;
 
// shortforms
 
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define all(x) (x).begin(),(x_.end()
#define srt(v) sort(v.begin(),v.end())
#define cpy(v2,v1) v2.assign(v1.begin(),v1.end())
 
//type definitions
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
//constants
 
const long long int inf = 1e18;
const int mod = 1000000007;
#define pi 3.141592653589793238462
 
// debugger
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
ll gcd(int a,int b){
 if(b==0){
  return a;
 }
 return gcd(b,a%b);
}
 
int main() {
#ifndef ONLINE_JUDGE
 freopen("Error.txt", "w", stderr);
#endif
 
 //main code starts here
 int t,n,k,l,l1,s=0;
 cin>>t;
 while (t--){
  cin>>n;
  std::vector<int> v;
  for(int i =0; i<n ; i++){
   cin>>k;
   v.pb(k); 
  }
  debug(v)
  std::vector<int> v1,v2;
  for(int i =0; i<n ; i++){
   if (v[i]%2==0){
    v1.pb(v[i]);
   }
   else{
    v2.pb(v[i]);
   }
  }
  debug(v1)
  debug(v2)
  l=v1.size();
  l1=v2.size();
  debug(l)
  debug(l1)
  s=l*(n-1)-(((l)*(l-1))/2);
  debug(s)
  for(int i =0; i<l1-1 ; i++){
   for(int j=i+1; j<l1 ; j++){
    if (gcd(v2[i],2*v2[j])>1){
     s=s+1;
    }
    
   }
  }
  cout<<s<<endl;
 }
 return 0;
 
}