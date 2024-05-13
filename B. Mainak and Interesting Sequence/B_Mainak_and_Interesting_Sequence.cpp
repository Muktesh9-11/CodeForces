#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(){
    int n,m;
       cin>>n>>m;

       if(m<n){
        cout<<"NO"<<endl;
        return;
       }

       if(m%2==1){  // m is odd
        if(n%2==0){  // n is even
            cout<<"NO"<<endl;
        }
        else{   //n is odd
            cout<<"YES"<<endl;
            for(int i=0;i<n-1;i++){
                cout<<"1 ";
            }
            cout<<(m-(n-1))<<endl;
        }
        return;
       }


       if(m%2==0){   // m is even
        if(n%2==1){   // n is odd
            cout<<"YES"<<endl;
            for(int i=0;i<n-1;i++){
                cout<<"1 ";
            }
            cout<<(m-(n-1))<<endl;
        }
        else{   // n is even
            cout<<"YES"<<endl;
            for(int i=0;i<n-2;i++){
                cout<<"1 ";
            }
            cout<<(m-n+2)/2<<" "<<(m-n+2)/2<<endl;
        }
       }
}





int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
       
       solve();


    }
}