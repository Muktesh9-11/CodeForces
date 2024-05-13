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
        //cout<<endl;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<int> validk(n+1,1);

        for(int i=0;i<30;i++){
            vector<int> validfactors(n+1);
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[j] & (1<<i)){
                    count++;
                }
            }
            for(int j=1;j<=n;j++){
                if(count%j == 0){
                    validfactors[j]=1;
                }
            }
             for(int j=1;j<=n;j++){
                validk[j] = validk[j] & validfactors[j];
             }

        }
        for(int i=1;i<=n;i++){
            if(validk[i]){
                cout<<i<<" ";
            }
        }
        cout<<endl;

        
    }
}