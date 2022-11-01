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
 
int ask(int a,int b){
    cout<<"? "<<a<<" "<<b<<endl;
    int k;
    cin>>k;
    return k;
}
 
int main() {
 
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    //main code starts here
    int n;
    cin>>n;
 
    ll lo=1, hi=1ll*n;
    ll mid;
 
    while(hi-lo>1){
        mid=(hi+lo)/2;
        int r=ask(lo,hi);
        if(mid<=r){
            int r1=ask(mid, hi);
            if(r1==r){
                lo=mid;
            }
            else{
                hi=mid;
            }
        }
        else{
            int r1=ask(lo, mid);
            if(r1==r){
                hi=mid;
            }
            else{
                lo=mid;
            }
        }
    }
 
    int r=ask(lo,hi);
    if(r==lo){
        cout<<"! "<<hi<<endl;
    }
    else{
        cout<<"! "<<lo<<endl;
    }
    return 0;
}