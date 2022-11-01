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

// const int N=2e5+2;

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
int infec=1;

vector<int> bl;
vector<int> vis1;
vector<int> subsum;

void scalc(int ind, vector<pii> adj[]){
    subsum[ind]++;
    vis1[ind]=1;
    debug(ind)
    for(auto x: adj[ind]){
        if(vis1[x.ff]==1)continue;
        scalc(x.ff,adj);
        subsum[ind]+=subsum[x.first];
    }
}


void dfs(vector<pii> adj[], vector<int > &vis, int ind){
    for(auto x: adj[ind]){
        if(x.ss==1){
            ans++;
            vis[ind]=1;
            bl.pb(x.ff);
        }
        else{
            // debug(infec)
            vis[ind]=1;
            if(vis[x.ff]==0){
                // debug(x.ff)
                infec++;
                dfs(adj, vis, x.ff);
            }
            vis[x.ff]=1;
        }
    }
}

int main() {

    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //main code starts here
    int t;
    cin>>t;
    while(t--){
        int n,tot;
        cin>>n>>tot;
        subsum.clear();
        vis1.clear();
        bl.clear();
        std::vector<int> vis(n+1,0);
        vector<pii> adj[n+1];
        subsum.assign(n+1,0);
        vis1.assign(n+1,0);
        ans=0;
        infec=1;
        for(int i=0;i<n-1;i++){
            int u,v,k;
            cin>>u>>v>>k;
            // debug(u)
            adj[u].pb({v,k});
            adj[v].pb({u,k});
        }
        dfs(adj,vis,1);
        debug(vis)
        scalc(1,adj);
        if(infec>tot){
            cout<<-1<<endl;
            continue;
        }
        vector<int> ex;
        for(int i=0;i<bl.size();i++){
            ex.pb(subsum[bl[i]]);
        }
        srt(ex);
        for(int i=0;i<ex.size();i++){
            if(infec+ex[i]<=tot){
                ans--;
                infec+=ex[i];
            }
            else{
                break;
            }
        }

        cout<<max(ans,0)<<endl;

    }
    return 0;
}