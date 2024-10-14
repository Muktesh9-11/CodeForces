#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

int search(vector<ll>arr,ll low, ll high, ll target){
    if(low>high) return 0;

    ll mid = (low+high)/2;

    if(arr[mid]==target) return mid;
    else if(arr[mid]>target) return search(arr,mid+1 , high , target);
    else return search(arr, low , mid-1, target);
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        
        map<ll,map<ll,ll> > mpp;
        ll ans=0;

        for(int i=0;i<n;i++){
            ans+= mpp[(x-v[i]%x) %x] [v[i]%y];
            mpp[v[i]%x][v[i]%y]++;
        }

        cout<<ans<<endl;

    }
}