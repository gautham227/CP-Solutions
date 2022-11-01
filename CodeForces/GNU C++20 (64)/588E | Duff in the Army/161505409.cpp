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
#define endl "\n"
 
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
 
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
 
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
 
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
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll binexp(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return binexp(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
ll combination(ll n, ll r, ll m, vector<ll>& fact, vector<ll>& ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sievefn(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);} 
 
 
vector<int> merge( vector<int>& a , vector<int>& b ){
 
    int i = 0 , j = 0 ; 
 
    vector<int> res ;
 
    while(i<a.size() or j<b.size() ){
        if(res.size()==10){
            break;
        }
        if(i<a.size() and j<b.size()){
            if(a[i]==b[j]){
                i++;
                continue;
            }
            if(a[i]<b[j]){
                res.pb(a[i]) ;
                i++;
            }
            else{
                res.pb(b[j]);
                j++;
            }
        }
        else if(i<a.size()){
            res.pb(a[i]) ;
            i++;
        }
        else if(j<b.size()){
            res.pb(b[j]) ;
            j++;
        }
    }
 
    return res ;
 
} 
 
 
class LCA_binarylifting{
public:
 
    ll n, mlog;
    vector<vector<int> >par;
    vector<int> level;
    vector<vector<vector<int> > > subsets; 
 
    LCA_binarylifting(int no, vector<vector<int> >&adj, int root, vector<vector<int> >& vs){
        this->n=no;
        par.resize(n);
        subsets.resize(n);
        mlog=log2(no)+2;
        level.resize(n);
        for(int i=0;i<n;i++){
            par[i].resize(mlog);
            subsets[i].resize(mlog);
            for(int j=0;j<mlog;j++){
                par[i][j]=-1; // parent not assigned yet
            }
        }
        filltable(root, adj, vs);
    }
 
    void pardfs(int node, vector<vector<int> >& adj, vector<bool> & vis, int l, vector<vector<int> >& vs){
        vis[node]=true;
        level[node]=l;
        for(auto child: adj[node]){
            if(!vis[child]){
                par[child][0]=node;
                int cnt=0;
                vector<int> s1;
                for(auto it=vs[node].begin(); it!=vs[node].end();it++){
                    if(cnt==10){
                        break;
                    }
                    s1.pb(*it);
                    cnt++;
                }
                subsets[child][0]=s1;
                pardfs(child, adj,vis, l+1, vs);
            }
        }
    }
 
    void filltable(int root, vector<vector<int> >&adj, vector<vector<int> >& vs){
        vector<bool> vis(n, false);
        pardfs(root, adj, vis, 0, vs);
 
        for(int i=0;i<vs.size();i++){
            subsets[i][0]=merge(subsets[i][0], vs[i]);
        }
 
        int mid;
        for(int i=1;i<mlog;i++){
            for(int j=0;j<n;j++){
                mid=par[j][i-1];
                if(mid==-1)continue;
                par[j][i]=par[mid][i-1];
                if(par[j][i]!=-1){
                    vector<int> s1=merge(subsets[j][i-1], subsets[mid][i-1]);
                    subsets[j][i]=s1;
                }
            }
        }
    }
 
    vector<int> skth(int node, int k){
        debug(k)
        vector<int> s;
        for(int i=0;i<mlog;i++){
            if((k>>i)&1){
                debug(i)
                if(node==-1)return {};
                s=merge(s, subsets[node][i]);
                node=par[node][i];
            }
        }
        return s;
    }
 
    int kthpar(int node, int k){
        for(int i=0;i<mlog;i++){
            if((k>>i)&1){
                if(node==-1)return -1;
                node=par[node][i];
            }
        }
        return node;
    }
 
    int retdep(int node){
        return level[node];
    }
 
    int lca(int a, int b){
        if(level[a]>level[b]){
            swap(a,b);
        }
        int diff=level[b]-level[a];
        b=kthpar(b,diff);
 
        if(a==b)return a;
        for(int i=mlog-1;i>=0;i--){
            int par1=par[a][i];
            int par2=par[b][i];
            if(par1!=par2 && par1!=-1 && par2!=-1){
                a=par1;
                b=par2;
            }
        }
        return par[a][0];
    }
};
 
int main() {
 
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    //main code starts here
    ll n,m,q;
    cin>>n>>m>>q;
    vector<vector<int > >adj(n);
 
    for(int i=0;i<n-1;i++){
        ll a,b;
        cin>>a>>b;
        a--;b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
 
    vector<vector<int> >vs(n);
    for(int i=0;i<m;i++){
        ll k;
        cin>>k;
        k--;
        vs[k].pb(i+1);
    }
 
    LCA_binarylifting tree(n, adj, 0, vs);
 
    debug(vs)
    debug(tree.subsets)
 
    while(q--){
        ll v,u,a;
        cin>>v>>u>>a;
        v--;u--;
        int l1=tree.retdep(v), l2=tree.retdep(u);
        debug(l1)
        debug(l2)
        int lc=tree.lca(u,v);
        int llc=tree.retdep(lc);
        debug(lc)
        vector<int> ans;
        l1-=llc;l2-=llc;
        debug(l1)
        debug(l2)
        vector<int> s1;
        if(l1>1){
            ans=tree.skth(v,l1-1);
        }
        else{
            int c=0;
            ans=merge(ans, vs[v]);
        }
        debug(ans)
        if(l2>1){
            s1=tree.skth(u,l2-1);
            ans=merge(ans, s1);
        }
        else{
            ans=merge(ans, vs[u]);
        }
        int cnt=0;
 
        ans=merge(ans, vs[lc]);
        debug(ans)
 
        if(a<ans.size()){
            cout<<a<<" ";
        }
        else{
            cout<<ans.size()<<" ";
        }
        for(auto it=ans.begin(); it!=ans.end(); it++){
            if(cnt==a){
                break;
            }
            cout<<(*it)<<" ";
            cnt++;
        }
        cout<<endl;
    }
 
    return 0;
}