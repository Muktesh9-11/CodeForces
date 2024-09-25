#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        ll n;
        cin>>n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        if(n==1) {
            cout<<0<<endl; 
            continue;
        }

        ll x= arr[n-1]-arr[0];

        for(int i=0;i<n-1;i++){
            x= min(x,arr[i]-arr[i+1]);
        }
        cout<<x<<endl;
        
    }
}