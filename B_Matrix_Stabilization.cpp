#include<bits/stdc++.h>
#include<iostream>
#include <initializer_list>
#include <algorithm>
using namespace std;
#define ll long long

void solve(int flag,vector<vector<int> >&mtr,int n,int m){
    while(flag!=0){
        flag=0;
        vector<vector<int> >temp=mtr;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int v1,v2,v3,v4;
                if(i>0){
                    v1=mtr[i-1][j];
                }
                else{
                    v1=0;
                }
                if(j>0){
                    v2=mtr[i][j-1];
                }
                else{
                    v2=0;
                }
                if(i<n-1){
                    v3=mtr[i+1][j];
                }
                else{
                    v3=0;
                }
                if(j<m-1){
                    v4=mtr[i][j+1];
                }
                else{
                    v4=0;
                }

                int x=INT_MIN;
                x=max(x,v1);
                x=max(x,v2);
                x=max(x,v3);
                x=max(x,v4);

                if(mtr[i][j]>x){
                    temp[i][j]=x;
                    flag++;
                }
            }
        }
        mtr=temp;
    }
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int n,m;
        cin>>n>>m;
        vector<vector<int> >mtr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mtr[i][j];
            }
        }

        solve(1,mtr,n,m);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<mtr[i][j]<<" ";
            }
            cout<<endl;
        }

    }
}