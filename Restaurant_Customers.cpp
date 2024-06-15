#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t=1;
    //cin>>t;
    while(t-->0){
        //code here
        
        int n;
        cin>>n;
        map<int,int>mpp;
        int a,b;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            mpp[a]++;
            mpp[b+1]--;
        }
        int psum=0;
        int ans=0;
        for(auto it : mpp){
            psum+=it.second;
            ans=max(psum,ans);
        }

        cout<<ans<<endl;

    }
}