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
        
        ll n,k;
        cin>>n>>k;
        vector<ll> arr(n);
        ll count=0;
        ll gareeb=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<n;i++){
            if(arr[i]>=k){
                count+=arr[i];
                //gareeb++;
            }
            else if(arr[i]==0 && count>0){
                count--;
                gareeb++;
            }
        }

        cout<<gareeb<<endl;


    }
}