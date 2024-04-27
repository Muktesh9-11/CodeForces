#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(auto &it : arr) cin>>it;
        long long ans=0;
        for(long long i=0;i<=57;i++){
            long long k= (1LL << i);
            bool possible=true;
            long long value1= -1;
            long long value2= -1;
            for(long long j=0;j<n;j++){
                long long value = arr[j]%k;
                if(value1==-1) value1=value;
                if(value1 != value){
                    if(value2 ==-1) value2=value;
                    if(value2 !=value){
                        possible=false;
                        break;
                    }
                }
            }
            if(value2==-1){
                possible=false;
            }
            if(possible==true){
                ans=k;
                break;
            }
        }
        cout<<ans<<endl;
}

int main(){
    long long t;
    cin>>t;
    while(t-->0){
        //code here
        
        solve();

    }
}