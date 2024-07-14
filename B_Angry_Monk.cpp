#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t-- > 0) {
        ll n, k;
        cin >> n >> k;
        
        vector<ll> arr(k);
        ll ans = 0;
        for (ll i = 0; i < k; i++) {
            cin >> arr[i];
            ans += (arr[i] + arr[i] - 1);
        }

        auto max_it = max_element(arr.begin(), arr.end());
        
        ans -= (*max_it + *max_it - 1);
        
        cout << ans << endl;
    }
    return 0;
}
