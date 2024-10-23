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

        ll ans=0,rem=k;
        ll nxt = n;
        ll left =0;
        while(rem>=nxt){
            if(nxt * arr[left] <= rem){
                ans+= nxt*arr[left];
                rem -= nxt*arr[left];
                for(int i=left+1;i<n;i++){
                    arr[i]-= arr[left];
                }
                left++;
                nxt--;
            }
            else{
                ll t = rem/nxt;
                ans+= nxt*t;
                rem-= nxt*t;
                arr[left] -= t;
                break;
            }

            if(rem>0) ans++;
        }

        if(rem>=0) ans+=rem;

        cout<<ans<<endl;

    }
}