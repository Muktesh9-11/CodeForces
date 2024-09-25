#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    ll t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll peak1 = 0, max_peaks = 0, count = 0;

        for (ll i = 1; i < k - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                count++;
            }
        }
        max_peaks = count;
        peak1 = 1;

        for (ll l = 2; l <= n - k + 1; l++) {
            if (arr[l] > arr[l - 1] && arr[l] > arr[l + 1]) {
                count--;
            }
            if (arr[l + k - 2] > arr[l + k - 3] && arr[l + k - 2] > arr[l + k - 1]) {
                count++;
            }

            if (count > max_peaks) {
                max_peaks = count;
                peak1 = l;
            }
        }

        cout << max_peaks + 1 << " " << peak1 << endl; 
    }
}
