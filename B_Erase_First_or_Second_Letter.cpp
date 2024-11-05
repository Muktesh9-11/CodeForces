#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
    
        // ababa
        // aaba
        // aba
        // aa
        // a
        // baba
        // bba
        // ba
        // aba
        
        int n;
        cin>>n;
        string s;
        cin>>s;

        map<char,int> mpp;
        int ans=0;
        for(int i=0;i<n;i++){
            if(mpp[s[i]]==0){
                ans+=(n-i);
                mpp[s[i]]++;
            }
        }

        cout<<ans<<endl;

    }
}