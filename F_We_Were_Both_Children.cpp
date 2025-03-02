#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main() {
    fast;
    
    ll t;
    cin >> t;
    
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<ll> freq(n+1);
        for (ll i =0;i<arr.size();i++) {
            if(arr[i]<=n){
               freq[arr[i]]++;
            }
        }

        vector<ll> dp(n + 1, 0);

        for (ll i = 1 ; i<freq.size();i++) {
            //ll num = freq[i];
            for (ll j = i; j <= n; j += i) {
                dp[j] += freq[i];
            }
        }

        int ans = *max_element(dp.begin(), dp.end());
        /*ll ans =0;
        for(ll i = 0;i<dp.size();i++){
            ans = max(ans,dp[i]);
        }*/

        cout << ans << endl;
    }

    return 0;
}
