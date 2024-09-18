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
        
        int n;
        cin>>n;
        if(n<4) cout<<-1<<endl;
        else{
            if(n%2!=0){
                int temp=n;
                while(temp>=1){
                    cout<<temp<<" ";
                    temp-=2;
                }
                cout<<4<<" "<<2<<" ";
                temp=6;
                while(temp<n){
                    cout<<temp<<" ";
                    temp+=2;
                }
            }
            else{
                int temp=n-1;
                while(temp>=1){
                    cout<<temp<<" ";
                    temp-=2;
                }
                cout<<4<<" "<<2<<" ";
                temp=6;
                while(temp<=n){
                    cout<<temp<<" ";
                    temp+=2;
                }
            }
            cout<<endl;
        }

    }
}