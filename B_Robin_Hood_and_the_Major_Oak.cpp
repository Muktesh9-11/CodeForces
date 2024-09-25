#include<bits/stdc++.h>
#include<iostream>
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
        
        ll n,k;
        cin>>n>>k;
        // even n-> odd
        // odd n-> even
        // even k -> 

        
        ll x=k/2;
        if(n%2==1 && k%2==1){
            x++;
        }
        if(x%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}