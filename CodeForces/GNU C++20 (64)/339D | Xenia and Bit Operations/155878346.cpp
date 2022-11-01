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
 
class segtree
{
    vector<int> seg;
public:
 
    segtree(int n){
        seg.resize(4*n+1);
    }
 
    void build(int ind, int low, int high, vector<int> &arr){
        if(low==high){
            seg[ind]=arr[low];
            return;
        }
        int mid=low+(high-low)/2;
        build(2*ind+1,low,mid,arr);
        build(2*ind+2,mid+1,high,arr);
        int n=log(high-low+1)/log(2);
        if(n%2==1){
            seg[ind]=seg[2*ind+1]|seg[2*ind+2];
        }
        else{
            seg[ind]=seg[2*ind+1]^seg[2*ind+2];
        }
        return;
    }
 
    int ans(){
        return seg[0];
    }
 
    int query(int ind, int low, int high, int l, int r){
        if(low>r || high<l)return INT_MAX;
        if(l<=low && r>=high)return seg[ind];
        int mid=low+ (high-low)/2;
        int left=query(2*ind+1, low, mid, l, r);
        int right=query(2*ind+2, mid+1, high, l, r);
        return left|right;
    }
 
    void update(int ind, int low, int high, int i, int val){
        if(low==high){
            seg[ind]=val;
            return;
            debug(seg);
        }
        int mid=low+(high-low)/2;
        if(i<=mid){
            update(2*ind+1, low, mid, i, val);
        }
        else{
            update(2*ind+2, mid+1, high, i, val);
        }
        int n=log(high-low+1)/log(2);
        if(n%2==1){
            seg[ind]=seg[2*ind+1]|seg[2*ind+2];
        }
        else{
            seg[ind]=seg[2*ind+1]^seg[2*ind+2];
        }
    }
        
};
 
int main() {
 
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    //main code starts here
    int n,m;
    cin>>n>>m;
    int len=1<<n;
    // cout<<len<<endl;
    vector<int> arr(len);
    for(int i=0;i<len;i++)cin>>arr[i];
    segtree tree1(len);
    tree1.build(0,0,len-1, arr);
    while(m--){
        int p,val;
        cin>>p>>val;
        tree1.update(0,0,len-1, p-1, val);
        cout<<tree1.ans()<<endl;
    }
    return 0;
}