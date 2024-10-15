#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807


long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) { 
            result = (result * base) % mod;
        }
        base = (base * base) % mod; 
        exp /= 2; 
    }
    return result;
}

int main(){
    ll t;
    cin>>t;
    vector<ll> n(t);
    vector<ll> k(t);

    for(ll i=0;i<t;i++){
        cin>>n[i];
    }
    for(ll i=0;i<t;i++){
        cin>>k[i];
    }

    ll md = 1000000007;
    for(ll i=0;i<t;i++){
    ll ans = modExp(2,k[i],md);
    cout<<ans<<endl;
    }

}