#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll>arr(n+1);
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
    }
    
    for(ll i=1;i<=n;i++){
        arr[i]+=arr[i-1];
        //cout<<arr[i]<<" ";
    }
    for(ll i=1;i<=q;i++){
        ll a,b;
        cin>>a>>b;
        cout<<arr[b]-arr[a-1]<<endl;
    }
}

