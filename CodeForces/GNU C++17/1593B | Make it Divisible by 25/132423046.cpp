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
 
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    //main code starts here
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll s=n;
        ll ans=0,cnt=0,i1=0;
        while(ans!=2){
            if(cnt>19){
                break;
            }
            ll k;
            k=n%10;
            n=n/10;
            if((ans==0)&&(k==0 || k==5)){
                ans++;
                i1=k;
            }
            else if((ans==1)&&((i1==0 &&(k==0 || k==5)) || (i1==5 &&(k==2||k==7)))) {
                ans++;
            }
            else{
                cnt++;
            }
        }
        i1=5-i1;
        ans=0;
        ll cnt1=0;
        n=s;
        while(ans!=2){
            if(cnt1>19){
                break;
            }
            int k;
            k=n%10;
            n=n/10;
            if((ans==0 && k==i1)){
                ans++;
            }
            else if((ans==1)&&((i1==0 &&(k==0 || k==5)) || (i1==5 &&(k==2||k==7)))) {
                ans++;
            }
            else{
                cnt1++;
            }
        }
        cout<<min(cnt,cnt1)<<endl;
    }
    return 0;
}