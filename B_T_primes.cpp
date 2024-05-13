#include<bits/stdc++.h>
#include<iostream>
using namespace std;

const int N=1000002;
bool sieve[N];

int main(){
    
   //fill(sieve.begin(),sieve.end(),0);
   memset(sieve,0,sizeof(sieve));
    for(int i=2;i<N;i++){
        if(!sieve[i]){
            for(int j=2*i;j<N;j+=i){
                sieve[j]=1;
            }
        }
    }

    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n;i++){
        if(arr[i]<3){
            cout<<"NO"<<endl;
            continue;
        }
        long long temp=sqrt(arr[i]);
        if(temp*temp==arr[i] && !sieve[temp]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}