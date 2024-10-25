#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

ll count0(ll n){
    ll cnt = 0;
    while(n>0){
        if(n%10 != 0) break;
            cnt++;
            n/=10;
    }
    return cnt;
}

ll countdigits(ll n){
    ll cnt =0;
    while(n>0){
        cnt++;
        n /=10;
    }
    return cnt;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        ll n, k;
      cin>>n>>k;
      vector<ll> arr(n);
      for(int i=0;i<n;i++){
         cin>>arr[i];
      }


      ll sum = 0;
      vector<ll> z(n);
      for(ll i=0;i<n;i++){
        sum+= countdigits(arr[i]);
        z[i] = (count0(arr[i]));
      }

      sort(z.begin(),z.end(),greater<ll>());
      for(ll i=0;i<n;i+=2){
        sum -= z[i];
      }

      if(sum>=(k+1)) cout<<"Sasha"<<endl;
      else cout<<"Anna"<<endl;
      
    }
}