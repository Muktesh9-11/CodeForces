//All include & defs start
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>  
#include <functional>
#include <iostream>  
using namespace __gnu_pbds;  
using namespace std;
#define ll long long
#define pb push_back
#define dd double
#define ff float
#define ss string
#define ins insert
#define vv vector
typedef tree<int, null_type, less<int>, rb_tree_tag,  
            tree_order_statistics_node_update>  
    ordered_set; 
//All include and defs end

//Custom Function definitions start
//Custom exponentiation function
ll cPow(ll num, ll expo){
    if (expo == 0)
        return 1;

    ll res = cPow(num, expo / 2);

    if (expo % 2)
        return res * res * num;
    else
        return res * res;
}

//Prefix Sum function starts
vv<ll> prefixSum(vv<ll> arr, ll n){
  vv<ll> prefixSumArr(n, 0);
  prefixSumArr[0] = arr[0];
  for(ll i = 1; i < n; i ++){
    prefixSumArr[i] = prefixSumArr[i - 1] + arr[i];
  }
  return prefixSumArr;
}

//Custom function definitions end

//Function to solve problem starts


//Function to solve problem ends

//main function starts

int main(){
  ll testcases;
  cin >> testcases;
  while(testcases --){
    dd a, b, v1, v2;
    cin >> a >> b >> v1 >> v2;
    ll n;
    cin >> n;
    vv<pair<dd, dd>> vec(n);
    map<pair<dd, dd>, dd> m;
    for(ll i = 0; i < n; i ++){
      cin >> vec[i].first >> vec[i].second;
      m[{vec[i].first, vec[i].second}] = i;
    }
    sort(vec.begin(), vec.end());
    vv<tuple<dd, dd, dd>> rVec;
    for(ll i = 0; i < n; i ++){
      dd x = vec[i].first, y = vec[i].second;
      dd aq = v1 * v2;
      dd bq = -(v1 * y + v2 * a - v1 * b - v2 * x);
      dd bq2 = bq * bq;
      dd cq = x * b - a * b + a * y;
      dd discrim = (bq2 - 4 * aq * cq);
      if(discrim >= 0){
        discrim = (double)sqrt(discrim);
        dd pratham = bq + discrim;
        dd dwitiya = bq - discrim;
        dd t = min(pratham, dwitiya);
        if(t < 0){
          t = max(pratham, dwitiya);
        }
        if(t >= 0){
            rVec.pb(make_tuple(t, x, y));
        }
      }
    }
    sort(rVec.begin(), rVec.end());
    if(! rVec.empty()){
        cout << m[{get<1>(rVec[0]), get<2>(rVec[0])}] + 1 << endl;
    }
    else{
        cout << -1 << endl;
    } 
  }
  return 0;
}

//main function ends
//main function ends