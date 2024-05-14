#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long



int main(){
    ll t;
    cin>>t;
    while(t-->0){
       // solve();
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll x=arr[0]*arr[n-1];
    vector<ll> divisors;
    for (ll i = 2; i*i <= x; i++) {
        if (x % i == 0) {
            if(x/i==i){
            divisors.push_back(i);
        }
        else{
            divisors.push_back(i);
            divisors.push_back(x/i);
        } 
        }
    }
    sort(divisors.begin(),divisors.end());
    
    if(divisors==arr) cout<<x<<endl;
        //return;
    
    else cout<<-1<<endl;
        //return;
    
    }
}