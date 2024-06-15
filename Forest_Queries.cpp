#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t=1;
    //cin>>t;
    while(t-->0){
        //code here
        
        int n,q;
        cin>>n>>q;
        vector<vector<int> >arr(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                char c;
                cin>>c;
                if(c=='*'){
                    arr[i][j]=1;
                }
                else arr[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                arr[i][j]+=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
            }
        }
        for(int i=0;i<q;i++){
            int x1,x2,y1,y2;
            cin>>x1>>y1>>x2>>y2;
            cout<<arr[x2][y2]-arr[x2][y1-1]-arr[x1-1][y2]+arr[x1-1][y1-1]<<endl;
        }

    }
}