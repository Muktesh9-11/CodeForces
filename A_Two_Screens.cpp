#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        string s;
        cin>>s;
        string t;
        cin>>t;
        int n = min(s.size(),t.size());
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]) break;

            cnt++;
        }
        int ans = cnt + (s.size()-cnt) + (t.size()-cnt);
        if(cnt != 0) ans++;
        cout<< ans <<endl;

    }
}