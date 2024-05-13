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
         int is_prime[n+1];
         fill(is_prime,is_prime+n+1,0);
         //is_prime[1]=0;

         for(int i=2;i<=n+1;i++){
            if(!is_prime[i]){
                for(int j= 2*i;j<=n+1;j+=i){
                    is_prime[j]=1;
                }
            }
         }

         for(int i=2;i<=n+1;i++){
            if(n==1){
                cout<<1<<endl;
            }
            else if(n==2){
                cout<<1<<" "<<1<<endl;
                return 0;
            }
            else if(!is_prime[i]) {
                cout<<1<<" ";
            }
            else {
                cout<<2<<" ";
            }
         }
    }
}