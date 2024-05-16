#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        int l,r;
        for(l=0;l<n;l++){
            if(a[l]!=b[l]){
                break;
            }
        }
        for(r=n-1;r>=0;r--){
            if(a[r]!=b[r]){
                break;
            }
        }

        while(b[l-1]<=b[l] && l>0){
            l--;
        }
        while(b[r+1]>=b[r] && r<n-1){
            r++;
        }

        cout<<l+1<<" "<<r+1<<endl;

    }
}