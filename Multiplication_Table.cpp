#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define pb push back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

bool check(ll mid,ll n){
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ans+=min(n,mid/i);

    }
    ll tot=n*n;
    return ans>=(tot/2)+1;
}

int main(){
    
    ll n;
    cin>>n;
    ll l=0,r=(n*n)+1;
    while(l+1<r){
        ll mid=(l+r)/2;
        if(check(mid,n)) r=mid;
        else l=mid;
    }
    cout<<r<<endl;
}