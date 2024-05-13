#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        long long n;
        cin>>n;
        long long count=0;
        while(n>0){
            count+=n;
            n/=2;
        }
        cout<<count<<endl;
        
    }
}