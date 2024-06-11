#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n-1);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        b[0]=__gcd(a[0],a[1]);
        for(int i=1;i<n-1;i++){
            b[i]=__gcd(a[i],a[i+1]);
            if(b[i]<b[i-1]){
                a.erase(a.begin()+(i+1));
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            if(b[i+1]<b[i]){
                cout<<"NO"<<endl;
                break;
                return 0;
            }
        }
        cout<<"YES"<<endl;


    }
}