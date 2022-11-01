// Created by: G Gautham Krishna
#include <bits/stdc++.h>
 
using namespace std;
 
// shortforms
 
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define all(x) (x).begin(),(x).end()
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define lb(v,x) lower_bound(v.begin(),v.end(),x)
#define ub(v,x) upper_bound(v.begin(),v.end(),x)
#define cpy(v2,v1) v2.assign(v1.begin(),v1.end())
#define maxv(a) *max_element(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())
#define ff first
#define ss second
 
//type definitions
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
//constants
 
const long long int inf = 1e18;
const int mod = 1000000007;
#define pi 3.141592653589793238462
 
//graphs
 
//const int N=1e5+2;
//std::vector<int> vis(N,0);
//std::vector<int> adj[N];
 
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
template <class T, class V> void _print(multimap <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
int main() {
 
  //fast io
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
  //main code starts here
  int t;
  cin>>t;
  while(t--){
      int k,n;
      cin>>k>>n;
      string s;
      cin>>s;
      map<char,int> m;
      for(int i=0;i<s.size();i++){
          m[s[i]]++;
      }
    //   debug(m)
      vector<int> v(n,0);
      int cnt=0;
      if(k<n){cout<<0<<endl;continue;}
      if(k==n){cout<<1<<endl; continue;}
      for(auto it=m.begin();it!=m.end();it++){
          if(it->second%2==1)cnt++;
      }
      int ex1=cnt;
      int ind=0;
      int ex=0;
      int np=(k-ex1)/2;
      int add=np/n;
      if(add>=1){
          for(int i=0;i<n;i++){
              v[i]+=add*2;
          }
      }
      k=k-cnt;
      k=k-((add*n)*2);
      while(cnt>0 && ind<n){
          v[ind]+=1;
          cnt--;
          ind++;
      }
    //   srt(v);
      if(k>0){
          for(int i=ind;i<n;i=i+2){
          if(k>1){
              if(i==n-1){
              v[i]+=2;k=k-2;
              continue;
          }
          v[i]=v[i]+1;
          v[i+1]=v[i+1]+1;
          k=k-2;
          }    
      }
      }
      debug(v);
      ind=0;
    //   k=k-ex1-ex;
    //   if(k<0)cout<<0<<endl;
    srt(v);
      while(k>0){
          if(ind==n){
              ind=0;
          }
          v[ind]=v[ind]+2;
          ind++;
          k=k-2;
      }
      cout<<minv(v)<<endl;
 
  }
  return 0;
}