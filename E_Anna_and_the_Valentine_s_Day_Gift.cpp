#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

ll reverse(ll x) {
      if(x/10==0) return x;
      int len=0;
      ll temp= x;
      vector<int> store;
      while(temp>0) {
          store.push_back(temp%10);
          temp=temp/10;
          len++;
      }
      ll ans=0;
      temp=1;
      for(int i=len;i>0;i++){
          ans+= store[i-1]*temp;
          temp*=10;
      }
      return ans;
}

ll join(ll x, ll y){
      int len=0;
      ll temp= y;
      while(temp>0) {
          temp=temp/10;
          len++;
      }
      int j = 1
      for(int i=0;i<len;i++) {
          j*=10;
      }
      return x*j+y;
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
      sort(arr.begin() , arr.end());

    }
}