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
        int cnt0=0,cnt1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') cnt0++;
            else cnt1++;
        }
        int left = 0;
        while(left<s.size()){
            if(s[left]=='0' && cnt1>0){
                cnt1--;
            }
            else if(s[left]=='1' && cnt0>0){
                cnt0--;
            }
            else break;
            left++;
        }

        cout<<cnt0+cnt1<<endl;

    }
}