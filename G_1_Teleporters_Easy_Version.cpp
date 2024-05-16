#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        //code here
        
        ll n,c;
        cin>>n>>c;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            arr[i]+=(i+1);
            //cout<<arr[i]<<" ";
        }
        sort(arr.begin(),arr.end());
        ll sum=0,i=0;
        while(c>=0 && i<n){
            if(arr[i]<=c){
                c-=arr[i];
                i++;
                sum++;
            }
            else{
                break;
            }
        }
        cout<<sum<<endl;


    }
}