#include <iostream>
#include <climits>  // For LLONG_MAX
using namespace std;

#define ll long long

int main() {
    ll w, h, n;
    cin >> w >> h >> n;

    ll low = max(w,h), high = max(w,h)*n, ans = INT_MAX;

    while (low < high) {
        ll mid = (high + low) / 2;  // Avoid overflow when calculating mid

        // Check if the square of side length `mid` can fit at least `n` rectangles
        if ((mid / w) * (mid / h) >= n) {
            //ans = min(ans,mid);
            high = mid;  // Try to find a smaller valid mid
        } else {
            low = mid + 1;  // Increase mid if the current mid is too small
        }
    }

    cout << low << endl;
}
