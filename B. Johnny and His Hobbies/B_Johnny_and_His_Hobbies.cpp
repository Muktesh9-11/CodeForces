#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//vector<int> answer;
//string current;


int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here

    int n;
    cin>>n;
    int arr[n];
    vector<int> temp(1024,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        temp[arr[i]]++;
    }

    int ans=-1;
    for(int k=1;k<=1023;k++){
        vector<int> freq(1024,0);
        for(int i=0;i<n;i++){
            freq[arr[i]^k]++;
        }

        bool flag=true;
        for(int i=0;i<1024;i++){
            if(temp[i]!=freq[i]){
                flag=false;
                break;
            }
        }

        if(flag==true){
            ans=k;
            break;
        }
    }

    cout<<ans<<endl;

   
        


    }
}