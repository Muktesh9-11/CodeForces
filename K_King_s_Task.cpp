#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//ll_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

int main(){
    
    ll n;
    cin>>n;
    vector<ll> arr(2*n);
    for(ll i=0;i<2*n;i++){
        cin>>arr[i];
    }

    vector<ll> copy = arr;
    vector<ll> srtd = arr;
    sort(srtd.begin(),srtd.end());
    
    ll cnt=0;
    ll ans=INT_MAX;
    if(n%2==0){
        ll i=0;
        while(i<4){
            if(i%2==0){
                for(ll i=0;i<n;i++){
                    swap(arr[i],arr[n+i]);
                }
                i++;
                cnt++;
                if(arr==srtd){
                    ans=min(cnt, 4-cnt);
                    break;
                }
            }
            else{
                for(ll i=0;i<2*n;i+=2){
                    swap(arr[i],arr[i+1]);
                }
                i++;
                cnt++;
                if(arr==srtd){
                    ans=min(cnt, 4-cnt);
                    break;
                }
            }
        }
    }

    else{
        ll i=0;
        while(i<(2*n)+1){
            if(arr==srtd && i==0){
            ans=0;
            break;
            }

            if(i%2==0){
                for(ll i=0;i<n;i++){
                    swap(arr[i],arr[n+i]);
                }
                i++;
                cnt++;
                if(arr==srtd){
                    ans=min(cnt, ((2*n))-cnt);
                    break;
                }
            }

            else{
                for(ll i=0;i<2*n;i+=2){
                    swap(arr[i],arr[i+1]);
                }
                i++;
                cnt++;
                if(arr==srtd){
                    ans=min(cnt, ((2*n))-cnt);
                    break;
                }
            }
        }
    }
    if(ans==INT_MAX) ans=-1;
    cout<<ans<<endl;

}