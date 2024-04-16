#include<bits/stdc++.h>
#include<iostream>
using namespace std;

    vector<int> primes;
    vector<bool> is_prime;

void sieve(int n){
    is_prime.assign(n+1,true);
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i*i <=n;i++){
        if(is_prime[i]){
            for(int j=i*i;j<=n;j+=i){
                is_prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(is_prime[i]) primes.push_back(i);
    }
}

int main(){

    sieve(100000+13);

    int t=1;
    //cin>>t;
    while(t-->0){
        //code here

        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }

        int ans=INT_MAX;

        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                int nearestPrime = (*lower_bound(primes.begin(),primes.end(),a[i][j]));
                count+= nearestPrime - a[i][j];
            }
            ans = min(ans,count);
        }
        
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                int nearestPrime = (*lower_bound(primes.begin(),primes.end(),a[j][i]));
                count+=nearestPrime - a[j][i];
            }
            ans=min(ans,count);
        }

        cout<<ans<<endl;
        return 0;
        
    }
}