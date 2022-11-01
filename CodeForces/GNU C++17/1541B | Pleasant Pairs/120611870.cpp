// Created by: G Gautham Krishna
#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cmath>
#include<algorithm>
 
using namespace std;
 
// shortforms
 
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define all(x) (x).begin(),(x).end()
#define srt(v) sort(v.begin(),v.end())
#define cpy(v2,v1) v2.assign(v1.begin(),v1.end())
#define maxv(a) *max_element(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())
 
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
 
int main() {
#ifndef ONLINE_JUDGE
freopen("Error.txt", "w", stderr);
#endif
 
 //main code starts here
 int t,n,k,c,m=10000000;
 cin>>t;
 for(int i =0; i<t ; i++){
  cin >>n;
  std::vector<int> a;
  for(int j =0; j<n ; j++){
   cin>>k;
   a.pb(k);
  }
  std::vector<ll> b;
  for(int j =0; j<=2*n ; j++){
   b.pb(m);
   
  }
  for(int j =0; j<n ; j++){
   b[a[j]]=j+1;
  }
  c=0;
  for(int j=3; j<2*n ; j++){
   for(int k=1; k<=sqrt(j) ; k++){
    if (j%k==0 && (j/k)!=k){
     if (b[k]+b[j/k]==j){
      debug(j)
      debug(k)
      c=c+1;
     }
    }
   }
  }
  cout<<c<<endl;
 }
 return 0;
}