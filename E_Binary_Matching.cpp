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
        
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]==s[n-1]){
            cout<<0<<endl;
        }
        else if(s[1]=='1' && s[n-2]=='1'){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}