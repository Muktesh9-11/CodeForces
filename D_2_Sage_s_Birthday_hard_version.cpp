#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    vector<ll> ans;
    vector<ll> temp;
    ll left = 0, right = n / 2;
    ll count = 0;

    // Fill alternating elements in ans and leftover elements in temp
    while (left < n / 2 && right < n) {
        if (arr[right] > arr[left]) {
            ans.pb(arr[right]);
            ans.pb(arr[left]);
            left++;
            right++;
        } else {
            temp.pb(arr[right]);
            right++;
        }
    }

    // If any elements remain on the left side
    while (left < n / 2) {
        temp.pb(arr[left]);
        left++;
    }

    // Add remaining elements to ans from temp and arr
    while (right < n) {
        ans.pb(arr[right]);
        right++;
    }

    // Add all remaining elements in temp to ans
    for (ll i = 0; i < temp.size(); i++) {
        ans.pb(temp[i]);
    }

    // Counting valleys (elements smaller than both neighbors)
    for (ll i = 1; i < ans.size() - 1; i++) {
        if (ans[i] < ans[i - 1] && ans[i] < ans[i + 1]) {
            count++;
        }
    }

    // Output the count and the rearranged array
    cout << count << endl;
    for (ll i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
