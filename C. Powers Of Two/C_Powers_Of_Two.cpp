#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    if(k>n){
        cout<<"NO"<<endl;
        return;
    }
    vector<int> ans;
    for(int i=0;i<32;i++){
        if(n & 1<<i) ans.push_back(1<<i);
    }
    int size= ans.size();
    if(size>k){
        cout<<"NO"<<endl;
        return;
    }
    int ptr=0;
    while(size<k){
        while(ans[ptr] == 1) ptr++;
        ans[ptr] /= 2;
        ans.push_back(ans[ptr]);
        size++;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<k;i++) cout<<ans[i]<<" ";
        cout<<endl;
    
}

int main(){
    int t=1;
   // cin>>t;
    while(t-->0){
        //code here
        
        solve();
        
    }
}
