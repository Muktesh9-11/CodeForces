#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int x,y;
        cin>>x>>y;
        int ans=0;
        int count=0;
        if(y==0){
            while(x>0){
                x-=15;
                ans++;
            }
        }
       else if(y%2==0){
            count=y/2;
            x-=count*7;
            while(x>0){
                x-=15;
                count++;
            }
            ans=count;
        }
        else {
            count=y/2;
            x-=7*count;
            count++;
            x-=11;
            while(x>0){
                x-=15;
                count++;
            }
            ans=count;
        }

        cout<<ans<<endl;

    }
}
