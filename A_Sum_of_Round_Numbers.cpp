#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int n;
        cin>>n;
        int cnt=0;
        vector<int>arr;
        int zeros=1;
        while(n>0){
            if(n%10 != 0){
                cnt++;
                arr.pb((n%10)*zeros);
            }
            zeros*=10;
            n=n/10;
        }
        cout<<cnt<<endl;
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
}