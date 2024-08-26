#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define pb push_back

ll ans=LLONG_MAX;
bool check(vector<ll>& arr,ll mid,ll t){
    ll count=0;
    for(ll i=0;i<arr.size();i++){
        count+=mid/arr[i];
    }
    return count>=t;

}

void solve(vector<ll>& arr,ll low,ll high,ll t){
    ll mid=(low+high)/2;
    if(low>high) return;

    if(check(arr,mid,t)) {
        ans=min(ans,mid);
        return solve(arr,low,mid-1,t);
    }
    else return solve(arr,mid+1,high,t);
}

int main(){
        //code here
        
        ll n,t;
        cin>>n>>t;
        vector<ll>arr;
       // ll low=ll_MAX,high=0;

        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            arr.pb(x);
            //low=min(low,arr[i]);
            //high=max(high,arr[i]);
        }
        sort(arr.begin(),arr.end());

        solve(arr,1,arr[0]*t,t);
        cout<<ans<<endl;

}