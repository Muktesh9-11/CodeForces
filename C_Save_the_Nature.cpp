#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

// Custom GCD function (if __gcd is not supported)
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to check if a given mid value satisfies the condition
bool solve(vector<ll>& p, ll mid, ll k, ll x, ll y, ll a, ll b) {
    ll sum = 0;
    int itr = 0;

    ll lcm_ab = (a * b) / gcd(a, b); // Calculate LCM of a and b
    ll t = mid / lcm_ab;

    // Add contributions for elements divisible by both a and b
    for (int i = 0; i < t && itr < p.size(); i++) {
        sum += (p[itr]/100) * ((x + y));
        itr++;
    }

    // Add contributions for elements divisible by a but not b
    if(x>=y){
    ll only_a = mid / a - t;
    for (int i = 0; i < only_a && itr < p.size(); i++) {
        sum += (p[itr]/100) * (x);
        itr++;
    }

    // Add contributions for elements divisible by b but not a
    ll only_b = mid / b - t;
    for (int i = 0; i < only_b && itr < p.size(); i++) {
        sum += (p[itr]/100) * (y);
        itr++;
    }
    }
    else{
        ll only_b = mid / b - t;
    for (int i = 0; i < only_b && itr < p.size(); i++) {
        sum += (p[itr]/100) * (y);
        itr++;
    }
    ll only_a = mid / a - t;
    for (int i = 0; i < only_a && itr < p.size(); i++) {
        sum += (p[itr]/100) * (x);
        itr++;
    }
    }

    return sum >= k;
}

// Binary search function to find the minimum value of mid
void bin(vector<ll>& p, ll low, ll high, ll k, ll x, ll y, ll a, ll b, ll& ans) {
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (solve(p, mid, k, x, y, a, b)) {
            ans = mid; // Update answer if mid satisfies the condition
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        ll n;
        cin >> n;

        vector<ll> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        ll x, a;
        cin >> x >> a;

        ll y, b;
        cin >> y >> b;

        ll k;
        cin >> k;

        // Sort donations in descending order
        sort(p.begin(), p.end(), greater<ll>());

        // Initialize binary search range
        ll ans = -1;
        bin(p, 1, n, k, x, y, a, b, ans);

        cout << ans << endl;
    }

    return 0;
}
