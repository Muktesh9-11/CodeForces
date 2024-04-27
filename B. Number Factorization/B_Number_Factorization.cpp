#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t-->0){
        //code here
        
        long long n;
        cin>>n;
        long long x=1;
        map<long long,long long> mp;
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                long long cnt=0;
                while(n%i==0){
                    n/=i;
                    cnt++;
                }
                mp[i]=cnt;
                x=max(x,cnt);
            }
        }

        if(n!=1){
            mp[n]=1;
        }
        long long ans=0;
        for(long long j=1;j<=x;j++){
            long long product=1;
            for(auto it = mp.begin();it!=mp.end();it++){
                if(it->second>0){
                    mp[it->first]--;
                    product*=it->first;
                }
            }
            ans+=product;
        }
        cout<<ans<<endl;
    }
}