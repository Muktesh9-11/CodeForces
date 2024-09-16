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
        
        ll n,k;
        cin>>n>>k;
        int t=k/(n-1);
        int x= k%(n-1);
        if(x==0){
            t--;
            x=(n-1);
        }
        int current= n*t;
        cout<<current+(x)<<endl;

    }
}