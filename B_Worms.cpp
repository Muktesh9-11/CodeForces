#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define pb push_back
//ll_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

int solve(vector<ll>& arr,ll low,ll high,ll target){
            ll mid=(low+high)/2;
            if(low>high) return low;
            if(arr[mid]==target) return mid;
            else if(arr[mid]>target) return solve(arr,low,mid-1,target);
            else return solve(arr,mid+1,high,target);
        }

int main(){
        
        ll n;
        cin>>n;
        vector<ll>arr;
        vector<ll>psum(n+1);
        psum[0]=0;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            arr.pb(x);
            psum[i+1]=arr[i]+psum[i];
        }
        ll m;
        cin>>m;
        vector<ll>q;
        for(ll i=0;i<m;i++){
            ll x;
            cin>>x;
            q.pb(x);
        }

        for(ll i=0;i<m;i++){
            cout<<solve(psum,1,n,q[i])<<endl;
        }

}