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
freopen("inputf.in", "r", stdin);
freopen("outputf.in", "w", stdout);
freopen("Error.txt", "w", stderr);
#endif
 
 //fast io
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 //main code starts here
 ll n,k;
 cin>>n>>k;
 ll b=floor(n/2.0),a=ceil(n/2.0);
 while(k--){
  ll p,q;
  cin>>p>>q;
  if ((p+q)%2==0){
   ll m=p/2*a+(p-1)/2*b+(ll)ceil(q/2.0);
   cout<<m<<endl;
  }
  else{
   ll m=(ll)ceil(n*n/2.0)+p/2*b+((p-1)/2)*a+(ll)ceil(q/2.0);
   debug((ll)ceil(n*n/2.0))
   debug(p/2*b)
   debug(((p-1)/2)*a)
   debug((ll)ceil(q/2.0))
   cout<<m<<endl;
  }
 }
 return 0;
}