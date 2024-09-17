#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807
ll ans(ll l, ll r){
  ll x = sqrt(2 * (r - l));
  if(x * (x + 1) > 2 * (r - l))
    return x;
return x + 1;
}
int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        ll l, r;
        cin >> l >> r;
        //cout << ans(l, r) << endl;
       /* vector<ll>d;
        ll e=1;
        d.push_back(l);
        while (l+e<=r){
            d.push_back(l+e);
            e++;


        }*/


        cout<<ans(l, r)<<endl;

    }
}