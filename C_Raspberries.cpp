#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

int solve(){
    ll n,k;
        cin>>n>>k;
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        if(k==2){
            ll cnteven=0;
            for(int i=0;i<n;i++){
                if(arr[i]%2==0){
                    cnteven++;
                    break;
                }
            }
            if(cnteven) return 0;
            else return 1;
        }

        else if(k==4){
            ll cnteven=0;
            for(int i=0;i<n;i++){
                if(arr[i]%2==0){
                    cnteven++;
                }
                if(cnteven >=2) return 0;
            }
            if(cnteven==1) return 1;
            
        }
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int x = solve();
        cout<<x<<endl;

    }
}