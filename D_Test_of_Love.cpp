#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t-- > 0) {
        
            ll n,m,k;
            cin>>n>>m>>k;
            string arr;
            cin>>arr;

            ll it=m-1;
            ll swims=0,jumps=0;
            for(ll i=0;i<n;i++){
                if(arr[i]=='L'){
                    it=m;
                }
                else if(arr[i]=='W'){
                    if(it<=0){
                        swims++;
                    }
                }
                else{
                    if(it<=0){
                        jumps++;
                    }
                }
                it--;
            }

            if(swims>k){
                jumps++;
            }
            if(jumps!=0){
                cout<<"NO"<<endl;
            }
            if(jumps==0){
                cout<<"YES"<<endl;
            }
    }
    return 0;
}
