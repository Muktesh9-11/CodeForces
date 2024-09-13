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
        vector<int>arr(k);
        int rem=n%k;
        string ans;
        if(n/k==0) ans="NO";
        else if(n%2==0 && k%2==0){
            ans="YES";
            arr[k-1]=(n-k+1);
            for(int i=0;i<k-1;i++){
                arr[i]=1;
            }
        }
        else if(n%2==0 && k%2!=0){
            int cnt=0;
            for(int i=0;i<k-1;i++){
                arr[i]=2;
                cnt+=2;
            }
            arr[k-1]=(n-cnt);
            if((n-cnt)%2==0 && cnt<n){
                ans="YES";
            }
            else ans="NO";
        }
        else if(n%2!=0 && k%2!=0){
            ans="YES";
            for(int i=0;i<k-1;i++){
                arr[i]=1;
            }
            arr[k-1]=(n-k+1);
        }
        else{
            ans="NO";
        }

        cout<<ans<<endl;
        if(ans=="YES"){
            for(int i=0;i<k;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }



    }
}