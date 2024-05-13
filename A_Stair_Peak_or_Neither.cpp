#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        int a,b,c;
        cin>>a>>b>>c;
        if(c>b && b>a){
            cout<<"STAIR"<<endl;
        }
        else if(b>c && b>a){
            cout<<"PEAK"<<endl;
        }
        else cout<<"NONE"<<endl;
    }
}