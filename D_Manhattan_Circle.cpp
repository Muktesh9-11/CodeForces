#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
         int n,m;
         cin>>n>>m;
         char arr[n][m];
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
         }
         int u=INT_MIN,d=INT_MAX,l=INT_MAX,r=INT_MIN;
         int a,b;
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='#'){
                    u=max(i,u);
                    d=min(i,d);
                    l=min(j,l);
                    r=max(j,r);
                }
            }
         }
         a=(u+d)/2;
         b=(l+r)/2;
         cout<<a+1<<" "<<b+1<<endl;

    }
}

