#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        //code here
        
        ll n;
        cin>>n;
        //vector<int> arr(n);
        vector<ll> ans(n);
        if(n==2){
            cout<<2<<" "<<2;
        }
        else if(n==3){
            cout<<2<<" "<<1<<" "<<3;
        }
        else if(n%2==0){
            for(int i=0;i<n-2;i++){
                ans[i]=1;
            }
            ans[n-2]=2;
            ans[n-1]=n;
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
        }
        else{
            for(int i=0;i<n-3;i++){
                ans[i]=1;
            }
            ans[n-3]=2;
            ans[n-2]=1;
            ans[n-1]=n;
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
        }
        cout<<endl;

    }
}