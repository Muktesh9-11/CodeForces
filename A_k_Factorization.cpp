#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t=1;
    //cin>>t;
    while(t-->0){
        //code here
        
        int n,k;
        cin>>n>>k;
        vector<int>pf;
        for(int i=2;i*i<=n;i++){
            while(n%i==0){
                pf.push_back(i);
                n/=i;
            }
        }
        if(n>1) pf.push_back(n);

        int sz=pf.size();
        if(sz<k){
            cout<<-1<<endl;
            return 0;
        }
        else{
            while(sz>k){
                pf[sz-2]=pf[sz-2]*pf[sz-1];
                sz--;
            }
        }
        for(int i=0;i<sz;i++){
            cout<<pf[i]<<" ";
        }

    }
}