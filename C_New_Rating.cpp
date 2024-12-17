#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





ll solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(n==1) return 0;
    
    ll mini = INT_MIN;
    ll x=0;
    ll temp = 0;
    pair<int,int> p;
    int left=-1,right=-1;
    for(int i=0;i<n;i++){

        if(x<a[i]){
            x++;
            if(temp>0)temp--;
        }
        else if(x>a[i]) {
            x--;
            temp++;
            if(left==-1)left = i;
        }
        if(temp>=mini){
            mini = temp;
            p = make_pair(left,i);
        }
        if(temp<=0){
            temp=0;
            left=-1;
        }
    }
    ll ans = 0;
    if(mini<=0) return (n-1);
    else{
        for(int i=0;i<n;i++){
            if(i>=p.first && i<=p.second) continue;
            else{
                if(ans<a[i]) ans++;
                else if(ans>a[i]) ans--;
            }
        }
        return ans;
    }

}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
       ll x = solve();
       cout<<x<<endl;

    }
}