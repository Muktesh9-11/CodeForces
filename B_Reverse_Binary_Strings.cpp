#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        //code here
        
        ll n;
        cin>>n;
        string s;
        cin>>s;

        ll count1=0,count0=0;
        for(ll i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                if(s[i]=='0'){
                    count0++;
                }
                else count1++;
            }
        }
        cout<<max(count0,count1)<<endl;
        
    }
}


// 0011 1100    0011 1100
// 0011 0011    0011
// 0010 1011
// 0101 0101

// 111101 100000 111101 100000 
// 111101 000001 111101 010000
// 111010 100001 111010 101000
// 110101 010001 110101 010100
// 101010 101001 101010 101010
// 101010 101010
