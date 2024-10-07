#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

vector<int> arr;

void sieveOfEratosthenes() {
    int N=100;
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (long long p = 2; p * p <= N; ++p) {
        if (isPrime[p]) {
            for (long long i = p * p; i <= N; i += p)
                isPrime[i] = false;
        }
    }
    cout << "Prime numbers up to " << N << " are: ";
    for (long long p = 2; p <= N; ++p) {
        if (isPrime[p])
            arr.push_back(p);
    }
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        sieveOfEratosthenes();
        
        

    }
}