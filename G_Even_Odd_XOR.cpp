#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<bitset>
//const long long INF = 1ll << 32;
using namespace std;

void solve(){
        int n;
        cin>>n;


        if(n==3){
            cout<<"1 2 3"<<endl;
            return;
        }
        stack<int> even,odd;
        int f=2;
                
                for(int i=0;i<n/2;i++){
                    even.push(f);
                    odd.push(f+1);
                    f+=2;
                }

            if((n/2)&1){
                int p=odd.top();
                p^=1;
                odd.pop();
                int q= 1LL << 20;
                p^=q;
                odd.top()^=q;
                odd.push(p);
            }
        

        for(int i=1;i<=n;i++){
            if((n&1) && i ==n){
                cout<<0<<" ";
            }
            else if(i&1){
                cout<<odd.top()<<" ";
                odd.pop();
            }
            else{
                cout<<even.top()<<" ";
                even.pop();
            }
        }
        cout<<endl;
}


int32_t main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
            solve();
        
    }
}