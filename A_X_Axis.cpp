#include<bits/stdc++.h>
#include<iostream>
#include <cstdlib>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int a,b,c;
        cin>>a>>b>>c;
        int sum=INT_MAX;
        for(int i=1;i<=10;i++){
            int x=abs(a-i)+abs(b-i)+abs(c-i);
            sum=min(sum,x);
        }
        cout<<sum<<endl;

    }
}