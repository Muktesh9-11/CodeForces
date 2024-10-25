#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

/*vector<int> arr;

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
    //cout << "Prime numbers up to " << N << " are: ";
    for (long long p = 2; p <= N; ++p) {
        if (isPrime[p])
            arr.push_back(p);
    }
}*/

int main(){
        //code here
        vector<int> tocheck = {2,3,5,7,11,13,19,17,23,29,31,37,41,43,47,4,9,25,49};
        int cnt = 0;
        string s;
        for(auto x : tocheck){
            cout<<x<<endl;
            cin>>s;
            if(s=="yes") cnt++;
            if(cnt>1){
                cout<<"composite"<<endl;
                break;
                //return;
            }
        }
        if(cnt<2){
        cout<<"prime"<<endl;
        }
}