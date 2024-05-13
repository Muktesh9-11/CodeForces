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
        
        int c=0;
        for(int i=1;i<=50;i++){
            if(n%i==0){
                c++;
            }
            else break;
        }
        cout<<c<<endl;

    }
}