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
        vector<ll> arr(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(n==1 || n==2) cout<<-1<<endl;
        else{
            sort(arr.begin(),arr.end());
            ll req = arr[n/2] *2 * n +1;
            if(sum>req){
                cout<<"0"<<endl;
            }
            else{
                cout<<req-sum<<endl;
            }

        }


    }
}
