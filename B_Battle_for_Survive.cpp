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
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(i<n-2) sum+=arr[i];
        }
        cout<<arr[n-1]-arr[n-2]+sum<<endl;
        
    }
}