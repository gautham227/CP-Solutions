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
        int n,m;
        cin>>n>>m;
        int rno;
        vector<vector<int> >v(n, vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
 
        set<int> s;
        int f=1;
        for(int i=0;i<n;i++){
            if(is_sorted(all(v[i])))continue;
            vector<int> q=v[i];
            sort(all(q));
            for(int j=1;j<m;j++){
                if(v[i][j]!=q[j]){
                    rno=i;
                    s.insert(j);
                }
            }
        }
 
        // debug(s)
 
        if(s.size()==0){
            cout<<1<<" "<<1<<endl;
            continue;
        }
 
        if(s.size()>2){
            cout<<-1<<endl;
            continue;
        }
        
        if(s.size()==2){
            int ind1, ind2;
            int cnt=0;
            for(auto it=s.begin();it!=s.end();it++){
                if(cnt==0){
                    ind1=*(it);
                }
                else{
                    ind2=*(it);
                }
                cnt++;
            }
 
            // debug(ind1);
            // debug(ind2)
 
            int f=1;
 
            for(int i=0;i<n;i++){
                swap(v[i][ind1],v[i][ind2]);
                if(!is_sorted(all(v[i]))){
                    f=0;
                    swap(v[i][ind1],v[i][ind2]);
                    break;
                }
                swap(v[i][ind1],v[i][ind2]);
            }
            if(f){
                cout<<ind1+1<<" "<<ind2+1<<endl;
                continue;
            }
            
            f=1;
 
            for(int i=0;i<n;i++){
                swap(v[i][ind1],v[i][ind2+1]);
                if(!is_sorted(all(v[i]))){
                    f=0;
                    swap(v[i][ind1],v[i][ind2+1]);
                    break;
                }
                swap(v[i][ind1],v[i][ind2+1]);
            }
 
            if(f){
                cout<<ind1+1<<" "<<ind2+2<<endl;
            }
 
            f=1;
 
            for(int i=0;i<n;i++){
                swap(v[i][ind1+1],v[i][ind2]);
                if(!is_sorted(all(v[i]))){
                    f=0;
                    swap(v[i][ind1+1],v[i][ind2]);
                    break;
                }
                swap(v[i][ind1+1],v[i][ind2]);
            }
 
            if(f){
                cout<<ind1+2<<" "<<ind2+1<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
 
        else if(s.size()==1){
            int ind=-1;
            int x=*(s.begin());
            debug(x)
            for(int i=0;i<x;i++){
                if(v[rno][i]>=v[rno][x]){
                    ind=i;
                    break;
                }
            }
 
            debug(ind)
 
            if(ind==-1){
                ind=m-1;
            }
 
            for(int i=0;i<n;i++){
                swap(v[i][x],v[i][ind]);
                if(!is_sorted(all(v[i]))){
                    f=0;
                    swap(v[i][x],v[i][ind]);
                    break;
                }
                swap(v[i][x],v[i][ind]);
            }
            if(f){
                cout<<x+1<<" "<<ind+1<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
 
    }
    return 0;
}