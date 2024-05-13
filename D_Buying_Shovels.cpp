#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        ll n,k;
        cin>>n>>k;
        int ans=-1;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                int p1=i;
                int p2=n/i;
                if(p1<=k) ans=max(ans,p1);
                if(p2<=k) ans=max(ans,p2);
            }
        }
        cout<<(n/ans)<<endl;

    }
}