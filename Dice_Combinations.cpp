#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std; 

//ll cnt = 0;
ll n;
ll MOD = 1e9+7;

/*ll solve(vector<ll>&dp, ll target){
    if(target == 0){
        //cnt++;
        return 1;
    }

    if(dp[target] != -1) return dp[target];
    ll cnt = 0;
    for(ll it = 1; it<=6; it++){
        if(target - it >= 0)
            cnt = (cnt+ solve(dp,target-it)) % MOD;
    } 

    return dp[target] = cnt;

}*/

int main(){
    //ll n;
    cin>>n;
    //vector<vector<ll>>dp(7,vector<ll>(n+1,-1));
    ll sum = 0;
    vector<ll>dp(1e6+1,0);
   
    dp[0] = 1;
    //cout<< solve(dp,n)<<endl;
    for(ll i = 1;i<=n;i++){
        for(ll j=1;j<=6 && i-j>=0 ;j++){
            //if(dp[i] + dp[i-j] > n) continue;
            dp[i] = (dp[i] + dp[i-j]) % MOD;
        }
    }

    cout<<dp[n]<<endl;

}