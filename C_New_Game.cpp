#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
// INT_MAX=2,147,483,647
// LLONG_MAX=9,223,372,036,854,775,807

long long maxSubarraySum(const vector<int>& arr, int n, int k) {
    if (k > n) {
        return -1; 
    }

    long long max_sum = 0;
    for (int i = 0; i < k; i++) {
        max_sum += arr[i];
    }

    long long window_sum = max_sum;

    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum); 
    }

    return max_sum;
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        // Code here
        
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n); 
        map<ll, ll> mpp;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            arr[i] = x;
            mpp[x]++;
        }

        vector<int> v;
        for (const auto& pair : mpp) {
            v.push_back(pair.second); 
        }

        long long result = maxSubarraySum(v, v.size(), k);

        cout << result << endl;
    }
}
