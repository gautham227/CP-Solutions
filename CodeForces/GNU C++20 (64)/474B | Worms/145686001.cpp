// Created by: G Gautham Krishna
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
  //fast io
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
  //main code starts here
  long long n;
  cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long m;
    cin>>m;
    vector<long long> sum;
    int s=0;
    for(int i=0;i<n;i++){
        s+=v[i];
        sum.push_back(s);
    }
    for(int i=0;i<m;i++){
        long long x;
        cin>>x;
        long long l=0,r=n-1;
        while(l<=r){
            long long mid=(l+r)/2;
            if(sum[mid]<x){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<l+1<<endl;
    }
 
  return 0;
}