#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        //code here
        
        ll n,f,k;
        cin>>n>>f>>k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll temp;
        temp=a[f-1];
        sort(a.begin(), a.end(), greater<int>());
        if(k==n){
            cout<<"YES"<<endl;
        }
        else if(a[k-1]<=temp && a[k]!=temp){
            cout<<"YES"<<endl;
        }
        else if(a[k-1]>temp){
            cout<<"NO"<<endl;
        }
        else if(a[k-1]==temp && a[k]==temp){
            cout<<"MAYBE"<<endl;
        }

    }
}