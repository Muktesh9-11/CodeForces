#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

void solve(){
        long long n,m;
        cin>>n>>m;
        long long arr[n];
        for(long long i=0;i<n;i++) {
            cin>>arr[i];
        }

        if(n>m){
            cout<<0<<endl;
            return;
        }

        long long ans=1;
        for(long long i=0;i<n;i++){
            for(long long j=i+1;j<n;j++){
                ans=(ans*(abs(arr[i]-arr[j])))%m;
            }
        }
        cout<<ans<<endl;
}

int main(){
    long long t=1;
    //cin>>t;
    while(t-->0){
        //code here
        
        solve();

    }
}