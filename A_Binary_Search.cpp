#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

void solve(int l,int r,vector<int>&narry,int ki){
    while(l<=r){
    if(ki == narry[(l+r)/2]){
        cout<<"YES"<<endl;
        return;
    }
    else if(ki>narry[(l+r)/2]){
        l=(l+r)/2+1;
        //solve(l,r,narry,ki);
    }
    else if(ki<narry[(l+r)/2]){
        r=(l+r)/2-1;
        //solve(l,r,narry,ki);
    }

    }
    cout<<"NO"<<endl;
    return;
    
}

int main(){
     int t=1;
    while(t-->0){
        //code here
        
        int n,k;
        cin>>n>>k;
        vector<int>narry(n);
        vector<int>karry(k);
        for(int i=0;i<n;i++){
            cin>>narry[i];
        }
        for(int i=0;i<k;i++){
            cin>>karry[i];
        }

        for(int i=0;i<k;i++){
            solve(0,n-1,narry,karry[i]);
        }


    }
}