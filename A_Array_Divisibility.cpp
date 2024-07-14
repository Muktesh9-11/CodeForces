#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int n;
        cin>>n;
        vector<int>ans;
        for(int i=1;i<=n;i++){
                ans.push_back(i*(i+1));
        }
        for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
}