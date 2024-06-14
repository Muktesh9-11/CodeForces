#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        //code here
        
        ll n;
        cin>>n;
        vector<int>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll count=0;
        ll psum=0;
        int pmax=-1;
        for(ll i=0;i<n;i++){
            pmax=max(pmax,a[i]);
            psum+=a[i];
            if(psum==2*pmax){
                count++; 
            }
        }

        cout<<count<<endl;
    }
}