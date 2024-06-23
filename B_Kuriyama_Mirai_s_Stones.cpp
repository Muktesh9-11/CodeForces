#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t=1;
    //cin>>t;
    while(t-->0){
        //code here
        
         ll n;
         cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        vector<ll>u(n+1,0);
        vector<ll>v(n+1,0);
        v[1]=a[0];
        for(ll i=2;i<v.size();i++){
            v[i]=v[i-1]+a[i-1];
        }
        sort(a.begin(),a.end());
        u[1]=a[0];
        for(ll i=2;i<u.size();i++){
            u[i]=u[i-1]+a[i-1];
        }


        ll q;
        cin>>q;
        while(q--){
            ll qt,l,r;
            cin>>qt>>l>>r;
            if(qt==1){
                cout<<v[r]-v[l-1]<<endl;
            }
            else{
                cout<<u[r]-u[l-1]<<endl;
            }
        }

    }
}

