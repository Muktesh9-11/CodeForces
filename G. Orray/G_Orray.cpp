#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<int> ans;
        vector<int> vis(n,0);

        int mask=0,index=0;
        for(int iter=30;iter>=0;iter--){
            int maxmask=mask;
            int index=-1;

            for(int i=0;i<n;i++){
                if(!vis[i] && ((a[i] | mask) > maxmask)){
                    maxmask=(a[i] | mask);
                    index=i;
                }
            }

            if(index==-1) break; 

            vis[index]=1;
            ans.push_back(a[index]);
            mask |= maxmask;
        }

        for(int i=0;i<n;i++) if(!vis[i]) ans.push_back(a[i]);

        for(int i=0;i<n;i++) cout<< ans[i] <<" ";
        cout<<endl;
    }
    return 0;
}

