#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, m;
        cin >> n >> m;
        int arr[n], mi = INT_MAX, ma = 0;
        ll int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mi = min(mi, arr[i]);
            ma = max(ma, arr[i]);
        }

        for (int a = 1; a < n; a++) {
            sum += abs(arr[a] - arr[a - 1]);
        }
        
        ll int sum1 = sum;
        
        if (mi != 1) {
            sum1 += min(abs(1 - arr[0]), abs(1 - arr[n - 1]));
            for (int i = 0; i < n; i++) {
                sum1 = min(sum1, sum + abs(arr[i] - 1) + abs(arr[(i + 1) % n] - 1) - abs(arr[i] - arr[(i + 1) % n]));
            }
        }
        
        if (ma < m) {
            ll int sum2 = sum1 + min(abs(m - arr[0]), abs(m - arr[n - 1]));
            for (int i = 1; i < n; i++) {
                sum2 = min(sum2, sum1 + abs(arr[i] - m) + abs(arr[(i + 1) % n] - m) - abs(arr[i] - arr[(i + 1) % n]));
            }
            sum1 = sum2;
        }
        cout << sum1 << endl;
    }
}
