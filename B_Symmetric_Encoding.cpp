#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string temp=s;

        set<char>stt(temp.begin(),temp.end());
        // //sort(stt.begin(),stt.end());
        // vector<char>v(stt.begin(),stt.end());
        // /*for(int i=0;i<stt.size();i++){
        //     v[i]=stt[i];
        // }*/
        // //reverse(v.begin(),v.end());
        string r="";
        for(auto it:stt){
            r+=it;
        }
        map<char,char>mpp;
        int x=r.size();
        for(int i=0;i<x;i++){
            mpp[r[i]]=r[x-i-1];
        }
        string ans;
        for(char it : s){
            ans+=mpp[it];
        }
        cout<<ans<<endl;


    }
}