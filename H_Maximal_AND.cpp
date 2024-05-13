
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        vector<int> cnt(31,0);
        int ans=0;
        for(int j=30;j>=0;j--){
            int temp=0;
            for(int i=0;i<n;i++){
                if((arr[i] & (1<<j))>0){
                    temp++;
                }
            }
            cnt[j]=n-temp;
        }
        for(int j=30;j>=0;j--){
            if(cnt[j]<=k){
                k-=cnt[j];
                ans |= (1<<j);
            }
        }
        cout << ans << endl; 
    }
}

