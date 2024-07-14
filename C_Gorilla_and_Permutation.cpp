#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t-- > 0) {
        
            ll n,m,k;
            cin>>n>>m>>k;
            vector<ll>arr(n);
            for(ll i=n;i>m;i--){
                arr[n-i]=i;
            }
            for (ll i = n - m; i < n; ++i) {
                arr[i] = i - (n - m) + 1;
            }

            for(ll i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;

    }
    return 0;
}
