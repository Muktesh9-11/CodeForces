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
        
        ll a,b;
        cin>>a>>b;
        //ll ans=0;
        if(a>=b){
            cout<<a<<endl;
        }
        else{
            ll t= (b-a);
            a -= t;
            b -= 2*t;

            if(a>0){
                cout<<a<<endl;
            }
            else cout<<0<<endl;
        }

    }
}