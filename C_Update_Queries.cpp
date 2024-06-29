#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        //code here
        
        ll n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<ll>ind(m);
        for(ll i=0;i<m;i++){
            cin>>ind[i];
        }
        string c;
        cin>>c;
        ll l=m;
        sort(ind.begin(),ind.end());
        sort(c.begin(),c.end());
        for(ll i=0;i<m;i++){
            if(ind[i]==ind[i+1]){
                s[ind[i]-1]=c[l-1];
                c.erase(l-1,1);
                l--;
            }
            else{
                s[ind[i]-1]=c[0];
                c.erase(0,1);
                l--;
            }
        }
        cout<<s<<endl;

    }
}