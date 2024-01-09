#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        long long n,k;
        cin>>n>>k;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long x= *max_element(arr,arr+n);
        long long maxpowerK=1;
        while(maxpowerK < x){   //finding the max. value we would have added
            maxpowerK *= k;
        }

        bool ans=true;
        while(maxpowerK>0){
            int cnt=0;
            for(int i=0;i<n;i++){
            if(arr[i]>=maxpowerK){
                arr[i]-=maxpowerK;
                cnt++;
            }
            }
            if(cnt>1){
                ans=false;  // ther can not be 2 max. values ( or 2 values greater than max.k^i)
                break;
            }
            maxpowerK /= k;  // we have either added or not added at this step
        }

        if(ans){
            long long y= *max_element(arr,arr+n);
            if(y==0){       //checking if all elements have become 0 or not
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        } 
        else cout<<"NO"<<endl;


    }
}