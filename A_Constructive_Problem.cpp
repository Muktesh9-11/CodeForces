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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        map<int,int>mp;
        for(auto it : a){
            mp[it]++;
        }

        int mex=0;
        for(auto it : mp){
            if(it.first==mex){
                mex++;
            }
            else{
                break;
            }
        }
        int targetMex = mex+1;

        int l=-1;
        int r=-1;
        for(int i=0;i<n;i++){
            if(a[i]==targetMex){
                if(l==-1){
                    l=i;
                }
                r=i;
            }
        }

        if(l!=-1){
            for(int i=l;i<=r;i++){
                a[i]=mex;
            }
            map<int,int>mp;
            for(auto it : a){
                mp[it]++;
            }
            int newMex=0;
            for(auto it : mp){
                if(it.first==newMex){
                    newMex++;
                }
                else break;
            }

            if(newMex==targetMex){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }

        else{
            int flag=0;
            for(auto it : mp){
                if(it.first<mex && it.second>1){
                    flag=1;
                }
                if(it.first>mex+1){
                    flag=1;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
}