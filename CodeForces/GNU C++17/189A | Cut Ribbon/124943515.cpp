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
 int n,a,b,c,n1,n2,n3;
 cin>>n>>a>>b>>c;
 std::vector<int> v{a,b,c};
 srt(v);
 n1=v[0];
 n2=v[1];
 n3=v[2];
 debug(n1)
 debug(n2)
 debug(n3)
 int m=0;
 int cnt=n/n1,r=n%n1,ans=0;
 while(cnt>=0){
  debug(cnt)
  debug(r)
  for (int i = 0; i <=r/n3+1 ; ++i)
  {
   if ((r-i*n3)>=0 && (r-i*n3)%n2==0){
    debug(i)
    debug((r-i*n2))
    m=cnt+i+(r-i*n3)/n2;
    ans=max(m,ans);
   }
  }
  cnt=cnt-1;
  r=r+n1;
 }
 cout<<ans<<endl;
 return 0;
}