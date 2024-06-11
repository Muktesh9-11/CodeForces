#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        //code here
        
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll count=0;
        vector<ll>psum(n+1,0);
        //psum[0]=0;
        for(ll i=1;i<=n;i++){
            psum[i]=psum[i-1]+a[i-1];
        }
        for(ll i=0;i<n;i++){
            if(a[i]==psum[i]){
                count++;
            }
            
                for(int j=i;j<n;j++){
                    if(psum[i+1]==2*a[i]){
                        count++;
                        break;
                    }
                }
            
        }
        
        cout<<count<<endl;

    }
}