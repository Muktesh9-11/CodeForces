#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

int main(){
        //code here
        ll t = pow(2,99999);
        t = t % (static_cast<long long>(10e9)+7) ;
        cout<<t<<endl;
        
}