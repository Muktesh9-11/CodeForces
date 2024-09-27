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
		vector<ll> mount(n);
		vector<ll> peaks;
		for(ll j = 0; j < n ; j ++){
			cin >> mount[j];
		}
		for(ll j = 1; j < n - 1; j ++){
			if(mount[j] > mount[j - 1] && mount[j] > mount[j + 1]){
				peaks.pb(j);
			}
		}
		ll left = 0, right = 0;
		ll s = peaks.size();
		ll ans1 = 0;
		ll ans2 = 1;
		while(right < s){
			ll l = peaks[right] - peaks[left] + 3;
			if(l <= k){
				if(ans1 < right - left + 1){
					ans1= right - left + 1;
					ans2 = peaks[left] - (k - l);
					if(ans2 <= 0){
					    ans2 = 1;
					}
				}
			right ++;
			}
			else{
				left ++;
			}
		}
		ans1 += 1;
		cout << ans1 << " " << ans2 << endl;  
    }
}
