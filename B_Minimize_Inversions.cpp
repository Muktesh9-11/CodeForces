#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        pair<int,int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i].first;
        }
        for(int i=0;i<n;i++){
            cin>>arr[i].second;
        }

        sort(a,a+n);
        for(auto it : arr){
            cout<<it.first<<" ";
        }
        cout<<endl;
        for(auto it : arr){
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
}