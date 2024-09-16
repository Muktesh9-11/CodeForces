#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

ll ans=0;

int main(){
        //code here
        
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            arr[i]=abs(arr[i]);
        }
        sort(arr.begin(),arr.end());
        for(ll i=0;i<n;i++){
            auto it= upper_bound(arr.begin(),arr.end(),2*arr[i]); // all valid y for every x in arr is less than 2*x
            it--; //poller to index of previous value of upper bound
            ans+= (it-arr.begin())-i; // (it-arr.begin()) gives the no. of elements  
        }

        cout<<ans<<endl;


}