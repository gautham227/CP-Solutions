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
 
int ans=0;
vector<int> v,v1;
bool prop(int n){
  debug(n)
  for(int i=0;i<v1.size()-2;i++){
    if(v1[i]<n)return false;
    else{
      int k=min(v[i],(v1[i]-n))/3;
      v1[i]-=3*k;
      v1[i+1]+=k;
      v1[i+2]+=2*k;
    }
    debug(v1)
  }
  if(v1[v1.size()-2]>=n && v1[v1.size()-1]>=n){
    return true;
  }
  return false;
}
 
void bs(int low,int high){
    v1=v;
    if(high>=low){
        int mid=low+(high-low)/2;
        if(prop(mid)){
            ans=mid;
            bs(mid+1,high);
        }
        else{
            bs(low,mid-1);
        }
    }
}
 
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
  int t;
  cin>>t;
  while(t--){
    int no;
    ans=0;
    cin>>no;
    v.clear();
    v1.clear();
    for(int i=0;i<no;i++){
      int k;
      cin>>k;
      v.pb(k);
    }
    reverse(all(v));
    debug(v)
    bs(0,1e9+10);
    cout<<ans<<endl;
  }
  return 0;
}