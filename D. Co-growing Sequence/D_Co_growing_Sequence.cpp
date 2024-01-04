#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<int> hash(n,0);
        for(int j=0;j<30;j++){
            bool found=0;
            for(int i=0;i<n;i++){
                if((arr[i]&(1<<j)) && found==0){
                    found=1;
                }
                else if(found && (arr[i]&(1<<j)) == 0){
                    hash[i] += (1<<j);
                }
            }

        }
        

        for(int i=0;i<n;i++){
            cout<<hash[i]<<" ";
        }
        cout<<'\n';


    }
}