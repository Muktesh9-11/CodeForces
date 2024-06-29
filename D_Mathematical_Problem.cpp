#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

void solve(){
    ll n;
        cin>>n;
        string s;
        cin>>s;
        if(n==2){
            cout<<stoi(s)<<endl;
            return;
        }
        ll ans= INT_MAX;
        for(ll i=0;i<n-1;i++){
            vector<ll>v;
            for(ll j=0;j<i;j++){
                v.push_back(s[j]-'0');
            }
            v.push_back(stoi(s.substr(i,2)));
            for(ll j=i+2;j<n;j++){
                v.push_back(s[j]-'0');
            }
            sort(v.begin(),v.end());
            if(v[0]==0){
                cout<<"0"<<endl;
                return;
            }
            ll sum=0;
            for(auto i : v){
                if(i!=1){
                    sum+=i;
                }
            }
            if(sum==0) sum=1;

            ans=min(ans,sum);
        }
        cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        //code here
        
        solve();

    }
}