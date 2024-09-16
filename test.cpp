#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

int main(){
    
   vector<int> arr;
    arr.pb(1);
    arr.pb(2);
    //arr.pb(3);
    //arr.pb(4);
    //arr.pb(5);
   cout<<lower_bound(arr.begin(), arr.end(), 3) - arr.begin();

}