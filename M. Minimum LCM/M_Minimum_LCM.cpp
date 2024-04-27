#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

ll lcm(ll a,ll b){
    return (a*b)/__gcd(a,b);
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        ll n;
        cin>>n;
        ll a1=1 , b1=n-1;
        ll ans=lcm(a1,b1);
        for(ll g=2;g*g<=n;++g){
            if(n%g==0){
                ll temp=lcm(g,n-g);
                if(temp<ans){
                    ans=temp;
                    a1=g,b1=n-g;
                }
                if(n/g !=g){
                    temp=lcm(n/g , n-(n/g));
                    if(temp<ans){
                        ans=temp;
                        a1=n/g, b1=n-n/g;
                    }
                }
            }
        }
        cout<<a1<<" "<<b1<<endl;
        

    }
}