

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(){
long long x; cin>>x;
pair<long long,long long> ans = {-1, -1};
for(long long a = 1; a * a <= x ; a++) {
if(x % a == 0) {
long long b = x / a;
if(__gcd(a ,b)==1){
ans = {a,b};
}
}
}
cout<<ans.first<<" "<<ans.second<<endl;
}

long long main(){
    solve();
}