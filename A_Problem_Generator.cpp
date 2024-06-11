#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        int count=0;
        for(auto it : mpp){
            if(it.second<m){
                count+=(m-it.second);
            }
        }
        
        cout<<count+(m*(7-mpp.size()))<<endl;
        

    }
}