#include<bits/stdc++.h>
#include<iostream>
//#define ll ll64_t
using namespace std;
#define ll long long

ll ans;

ll check(ll mid,vector<ll>& arr,ll k){

    ll cnt=1;
    ll sum=0;
    for(ll i=0;i<arr.size();i++){
        if(sum+arr[i]>mid){
            cnt++;
            sum=0;
        }
        sum+=arr[i];
    }
    return cnt<=k;

     /*ll cnt=0;
     ll sum=0;
     ll temp=0;
     for(ll i=0;i<arr.size();i++){
         sum+=arr[i];
         if(sum>mid){
            temp=max(sum,temp);
            sum=0;
            cnt++;
         }
     }
     if(sum!=0) {
        cnt++;
        temp=max(sum,temp);
     }
     if(cnt==k){
        ans=min(ans,temp);
        return 1;
     }
     else if(cnt<k) return 1;

     return 0;*/

}

void solve(vector<ll>& arr,ll low,ll high,ll k){
    ll mid= (low+high)/2;
    if(low>high) return;

    //ll chk=check(mid,arr,k);

    if(check(mid,arr,k)) {
        ans=mid;
        return solve(arr,low,mid-1,k);
    }
    //else if(chk==-1) return solve(arr,low,mid-1,k);
    else return solve(arr,mid+1,high,k);
}

int main(){
    
    ll n,k;
    cin>>n>>k;
    vector<ll> arr;
    ll sum=0,val=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        arr.push_back(x);
        val=max(val,arr[i]);
        sum+=arr[i];
    }

    solve(arr,val,sum,k);
    cout<<ans<<endl;

}