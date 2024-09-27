#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

int solve(){
        ll n;
        cin>>n;
        vector<int> arr(n);
        int flag=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1) return 0;

        int ans=0;
        for(int i=0;i<n;i++){
            ans= __gcd(ans,abs(arr[i]-arr[n-i-1]));
        }
        return ans;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        // if all elements equal -> infinity -> 0
        // Max( a[n-i-1] - a[i] ) -> check -> if palindrome return else next largets
        cout<<solve()<<endl;

    }
}