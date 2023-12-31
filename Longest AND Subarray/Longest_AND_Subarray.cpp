#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//vector<int> answer;
//string current;


int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        int n;
        cin>>n;
        int ans=0;
        int current=1;
        while(current<=n){
            int nxt=min(n,(current*2)-1);
            ans=max(ans,nxt-current+1);
            current*=2;
        }
        cout<<ans<<endl;

    }
}