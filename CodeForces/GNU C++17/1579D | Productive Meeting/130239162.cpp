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
#define cpy(v2,v1) v2.assign(v1.begin(),v1.end())
#define maxv(a) *max_element(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())
#define ff first
#define ss second
 
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
template <class T, class V> void _print(multimap <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
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
        std::vector<int> v1;
        std::vector<int> v2;
        std::vector<int> v3;
        int n,cnt=0;
        cin>>n;
        priority_queue<pair<int,int> > v;
        for (int i = 0; i < n; ++i)
        {
            int k;
            cin>>k;
            if (k!=0){
            v.push({k,i+1});
            }
            debug(k)
        }
        debug(v.top())
        ll s=0;
        int n0=0;
        int s0=v.size();
        debug(s0)
        while(v.size()>=2){
            pair<int,int> a=v.top();
            debug(a)
            v.pop();
            pair<int,int> b=v.top();
            v.pop();
            if(a.ff-1>0){
                v.push({a.ff-1,a.ss});
            }
            if(b.ff-1>0){
                v.push({b.ff-1,b.ss});
            }
            v1.pb(a.ss);
            v2.pb(b.ss);
            cnt++;
        }
        debug(v1)
        debug(v2)
        debug(v3)
        cout<<cnt<<endl;
        for (int i = 0; i < v1.size(); ++i)
        {
            cout<<v2[i]<<" "<<v1[i]<<endl;
        }
 
    }
    return 0;
}