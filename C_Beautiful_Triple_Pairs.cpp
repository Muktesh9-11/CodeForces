#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }
        map<pair<int, int>, int> ab, bc, ac;
        map<tuple<int, int, int>, int> ab3, bc3, ac3;
        long long ans = 0;
        for (int i = 0; i < n - 2; i++) {
            int a = v[i];
            int b = v[i + 1];
            int c = v[i + 2];
            ab[{a, b}]++;
            bc[{b, c}]++;
            ac[{a, c}]++;
            tuple<int, int, int> triple = make_tuple(a, b, c);
            ab3[triple]++;
            bc3[triple]++;
            ac3[triple]++;
            ans += ab[{a, b}] - ab3[triple];
            ans += bc[{b, c}] - bc3[triple];
            ans += ac[{a, c}] - ac3[triple];
        }
        cout << ans<< endl;

    }
}


