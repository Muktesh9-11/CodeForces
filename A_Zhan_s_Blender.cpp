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
        
        ll n;
        cin>>n;
        ll x,y;
        cin>>x>>y;
        ll count;
        count=(n/min(x,y));
        if(n%min(x,y)!=0) count++;
        cout<<count<<endl;

    }
}