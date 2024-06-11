#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        string a,b;
        char c;
        cin>>a>>b;
        c=a[0];
        a[0]=b[0];
        b[0]=c;
        cout<<a<<" "<<b<<endl;

    }
}