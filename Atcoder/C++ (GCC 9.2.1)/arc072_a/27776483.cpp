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
    int n;
    cin>>n;
    vector<ll> v1,v2;
    // vector<int> no;
    ll sum=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        sum=sum+k;
        // no.pb(k);
        v1.pb(sum);
        v2.pb(sum);
    }
    ll ans1=0,ans2=0;
    ll cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        v1[i]=v1[i]+cnt1;
        v2[i]=v2[i]+cnt2;
        if(i%2==0){
            if(v1[i]<=0){
                ans1=ans1+abs(v1[i])+1;
                cnt1=cnt1+abs(v1[i])+1;
                v1[i]=1;
            }
            if(v2[i]>=0){
                ans2=ans2+v2[i]+1;
                cnt2=cnt2-v2[i]-1;
                v2[i]=-1;
            }
        }
        else{
            if(v1[i]>=0){
                ans1=ans1+v1[i]+1;
                cnt1=cnt1-v1[i]-1;
                v1[i]=-1;
            }
            if(v2[i]<=0){
                ans2=ans2+abs(v2[i])+1;
                cnt2=cnt2+abs(v2[i])+1;
                v2[i]=1;
            }
        }
    }
    // debug(v1)
    // debug(v2)
    cout<<min(ans1,ans2)<<endl;
    return 0;
}