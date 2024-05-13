#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPrime(int n)
{
  
  if(n == 1 || n == 0)return false;
  
  for(int i = 2; i * i <= n; i++)
  {
    if(n % i == 0)return false;
  }
  return true;
}

int main(){

    vector<int> prime;
    int N = 21000;
      for(int i = 1; i <= N; i++)
      {
      if(isPrime(i)) 
      {
        prime.push_back(i);
      }
    }
    //cout<<prime.size();

    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int n;
        cin>>n;
        int a,b,temp;
        
        for(int i=0;i<2360;i++){
            if(prime[i]>=(1+n)){
                a=prime[i];
                temp=i;
                break;
            }
        }
        for(int i=temp;i<2360;i++){
            if(prime[i]>=(a+n)){
                b=prime[i];
                temp=i;
                break;
            }
        }
        cout<<a*b<<endl;

    }
}