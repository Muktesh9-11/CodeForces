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
        
        ll n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int count=0; int max1=0;
        for(int i=0;i<n;i+=2){
            count++;
            max1= max(max1,arr[i]);
        }

        max1+=count;

        count=0;
        int max2=0;
        for(int i=1;i<n;i+=2){
            count++;
            max2= max(max2,arr[i]);
        }

        max2+=count;

        cout<<max(max1,max2)<<endl;

    }
}