#include<bits/stdc++.h>
#include<iostream>
#include<string>
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
        
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        vector<ll> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        ll ans=0;
        ll temp = 0;
        ll maxb =0;
        for(int i=0;i<n;i++){
            if(i==k) break;
            temp += a[i];
            maxb = max(b[i],maxb);
            ans = max(ans, temp + (k-i-1)*maxb);
        }

        cout<<ans<<endl;

    }
}