#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void maps(int n,map<int,int>&mpp){
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            mpp[i]++;
            n/=i;
        }
    }
    if(n>1) mpp[n]++;
}

void solve(int n,map<int,int>&mpp){
    for(auto it : mpp){
            if(it.second % n!=0){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
       
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int n;
        cin>>n;
        vector<int>arr(n);
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maps(arr[i],mpp);
        }

        solve(n,mpp);

        

    }
}