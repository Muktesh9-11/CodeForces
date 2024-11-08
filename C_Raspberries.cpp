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
            ll temp = INT_MIN;
            //ll N=arr[0];
            //if(N%2==0) cnteven++;
            for(int i=0;i<n;i++){
                if(arr[i]%2==0) cnteven++;
                if(arr[i]%4==0) return 0;
                temp = max(arr[i]%4,temp);
                //if(arr[i]%2==0) cnteven++;
                //if(N%4 == 0) return 0;
                //N=N*arr[i];
                //N=N%100;
            }
            if(cnteven>=2) return 0;
            else if(cnteven==1 || temp==3) return 1;
            else return 2;
            //if(cnteven == 1) return 1;
            //else return 2;
        }

        else if(k==3){
            ll temp=INT_MIN;
            for(int i=0;i<n;i++){
                temp = max(arr[i]%3,temp);
                if(arr[i]%3 == 0) return 0;
            }
            return (3-temp);
        }

        else{
            ll temp = INT_MIN;
            for(int i=0;i<n;i++){
                temp = max(arr[i]%5,temp);
                if(arr[i]%5==0) return 0;
            }
            return (5-temp);
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