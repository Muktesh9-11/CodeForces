#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t=1;
    //cin>>t;
    while(t-->0){
        //code here
        
         int n;
         cin>>n;
         if(n>2){
            cout<<2<<endl;
         }
         else{
            cout<<1<<endl;
         }
// Using sieve of eratosthenes
         bool is_prime[n+1];
         fill(is_prime,is_prime+n+1,true);
         is_prime[0]=is_prime[1]=false;

         for(int i=2;i<=n;i++){
            if(is_prime[i]){
                for(int j= i*i;j<=n;j+=i){
                    is_prime[j]=false;
                }
            }
         }

         for(int i=2;i<=n+1;i++){
            if(is_prime[i]) cout<<1<<" ";
            else cout<<2<<" ";
         }
    }
}