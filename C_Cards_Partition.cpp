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
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        ll max= *max_element(arr.begin(),arr.end());

        ll ans=1;
        ll temp=n;
        while(temp>0){
            // max decks formed
            ll m = (sum + k)/temp;
            if(m*temp > (sum-1) && (m+1)>max){
                ans=temp;
                break;
            }
            temp--;
        }

        cout<<ans<<endl;


    }
}