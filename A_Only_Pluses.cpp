#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<5;i++){
            int x=min({a,b,c});
            if(x==a){
                a++;
            }
            else if(x==b){
                b++;
            }
            else{
                c++;
            }
        }
        cout<<a*b*c<<endl;

    }
}