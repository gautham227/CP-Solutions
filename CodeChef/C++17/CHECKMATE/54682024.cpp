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
    int t;
    cin>>t;
    while(t--){
        int kx,ky,r1x,r2x,r1y,r2y;
        cin>>kx>>ky;
        cin>>r1x>>r1y;
        cin>>r2x>>r2y;
        if(kx!=1 && kx!=8 && ky!=1 && ky!=8){
            cout<<"NO"<<endl;
        }
        else{
            int f=0;
            if(kx==1){
                if(r1x==2 && (r2y!=r1y &&  r2y!=max(1,ky-1) && r2y!=min(8,ky+1) && r1y!=max(1,ky-1) && r1y!=min(8,ky+1))){
                    f++;
                }
                if(r2x==2 && (r2y!=r1y && r1y!=max(1,ky-1) && r1y!=min(8,ky+1) && r2y!=max(1,ky-1) && r2y!=min(8,ky+1))){
                    f++;
                }
            }
            if(kx==8){
                if(r1x==7 && (r2y!=r1y && r2y!=max(1,ky-1) && r2y!=min(8,ky+1) && r1y!=max(1,ky-1) && r1y!=min(8,ky+1))){
                    f++;
                }
                if(r2x==7 && (r2y!=r1y && r1y!=max(1,ky-1) && r1y!=min(8,ky+1) && r2y!=max(1,ky-1) && r2y!=min(8,ky+1))){
                    f++;
                }
            }
            if(ky==1){
                if(r1y==2 && (r2x!=r1x && r2x!=max(1,kx-1) && r2x!=min(8,kx+1) && r1x!=max(1,kx-1) && r1x!=min(8,kx+1))){
                    f++;
                }
                if(r2y==2 && (r2x!=r1x && r1x!=max(1,kx-1) && r1x!=min(8,kx+1) && r2x!=max(1,kx-1) && r2x!=min(8,kx+1))){
                    f++;
                }
            }
            if(ky==8){
                if(r1y==7 && (r2x!=r1x && r2x!=max(1,kx-1) && r2x!=min(8,kx+1) && r1x!=max(1,kx-1) && r1x!=min(8,kx+1))){
                    f++;
                }
                if(r2y==7 && (r2x!=r1x &&  r1x!=max(1,kx-1) && r1x!=min(8,kx+1) && r2x!=max(1,kx-1) && r2x!=min(8,kx+1))){
                    f++;
                }
            }
            if(f>0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}