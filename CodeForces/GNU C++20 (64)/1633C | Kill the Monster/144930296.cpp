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
  /*Monocarp is playing a computer game. In this game, his character fights different monsters.
 
A fight between a character and a monster goes as follows. Suppose the character initially has health hC
and attack dC; the monster initially has health hM and attack dM
 
. The fight consists of several steps:
 
    the character attacks the monster, decreasing the monster's health by dC
 
;
the monster attacks the character, decreasing the character's health by dM
;
the character attacks the monster, decreasing the monster's health by dC
;
the monster attacks the character, decreasing the character's health by dM
 
    ;
    and so on, until the end of the fight. 
 
The fight ends when someone's health becomes non-positive (i. e. 0
 
or less). If the monster's health becomes non-positive, the character wins, otherwise the monster wins.
 
Monocarp's character currently has health equal to hC
and attack equal to dC. He wants to slay a monster with health equal to hM and attack equal to dM. Before the fight, Monocarp can spend up to k coins to upgrade his character's weapon and/or armor; each upgrade costs exactly one coin, each weapon upgrade increases the character's attack by w, and each armor upgrade increases the character's health by a
 
.
 
Can Monocarp's character slay the monster if Monocarp spends coins on upgrades optimally?
Input
 
The first line contains one integer t
(1≤t≤5⋅104
 
) — the number of test cases. Each test case consists of three lines:
 
The first line contains two integers hC
and dC (1≤hC≤1015; 1≤dC≤109
 
) — the character's health and attack;
 
The second line contains two integers hM
and dM (1≤hM≤1015; 1≤dM≤109
 
) — the monster's health and attack;
 
The third line contains three integers k
, w and a (0≤k≤2⋅105; 0≤w≤104; 0≤a≤1010) — the maximum number of coins that Monocarp can spend, the amount added to the character's attack with each weapon upgrade, and the amount added to the character's health with each armor upgrade, respectively.
 
Output
 
For each test case, print YES if it is possible to slay the monster by optimally choosing the upgrades. Otherwise, print NO.*/
 
    int t;
    cin >> t;
    while(t--) {
        ll hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;
        ll a1,b1;
        a1=ceil(double(hc)/double(dm));
        b1=ceil(double(hm)/double(dc));
        if(a1>=b1){
            cout<<"YES"<<endl;
            continue;
        }
        int f=0;
        for(int i=0;i<=k;i++){
            ll hc1=0,dc1=0;
            dc1=dc+i*w;
            hc1=hc+(k-i)*a;
            a1=ceil(double(hc1)/double(dm));
            b1=ceil(double(hm)/double(dc1));
            if(a1>=b1){
                f=1;
                break;
            }
        }
        if(f==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
  return 0;
}