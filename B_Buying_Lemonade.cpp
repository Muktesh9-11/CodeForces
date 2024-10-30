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
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        ll sub=0 , ans = k;
        for(int i=0;i<n;i++){
            arr[i]-= sub;
            //ans+= min(k,)
            k-= min(k,(n-i)*arr[i]);

            if(k==0) break;
            else ans++;

            sub+=arr[i];
        }

        cout<<ans<<endl;

    }
}