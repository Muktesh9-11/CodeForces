#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
#define pb push_back
#define vv vector
#define ins insert
#define pll pair<ll, ll>
#define ppll pair<ll, pair<ll, ll>>
#define vl vv<ll>

ss solve(ss s){
    ss ans;
    //cout << s.length();
    ll n = s.length();
    for(ll i = 0; i < n - 2; i ++){
      if((s[i] != s[i + 1]) && (s[i + 1] != s[i + 2]) && (s[i] != s[i + 2])){
        ans.pb(s[i]);
        ans.pb(s[i + 1]);
        ans.pb(s[i + 2]);
        return ans;
      }
      if(s[i] == s[i + 1]){
        ans.pb(s[i]); ans.pb(s[i + 1]);
        return ans;
      }
    }
    if(n >= 2 && s[n - 1] == s[n - 2]){
      ans.pb(s[n - 2]); ans.pb(s[n - 1]);
      return ans;
    }
    return "-1";
}

int main(){
    /*#ifndef ONLINE_JUDGE
    // For getting input from input.txt file 
    freopen("E:/Pen Drive/CP/inp.txt", "r", stdin); 

    // Printing the Output to output.txt file 
    freopen("E:/Pen Drive/CP/output.txt", "w", stdout);
    #endif */

    ll t;
    cin >> t;
    while(t --){
        ss s;
        cin >> s;
        ss ans = solve(s);
        cout << ans << endl;
    }
    return 0;
}