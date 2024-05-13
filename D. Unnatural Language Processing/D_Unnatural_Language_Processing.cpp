#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//vector<int> answer;
//string current;
bool check(char c){
    return (c=='a' || c=='e');

}


void solve(){
   int n;
   cin>>n;
   string str;
   cin>>str;

   string ans="";

    for(int i=n-1;i>=0;i--){
        if(check(str[i]) && !check(str[i-1])){
            ans+=str[i];
            ans+=str[i-1];
            ans+=".";
            i--;
        }
        else ans+=str[i];
    }

    ans.pop_back();  // to remove the extra "." at the end of ans

    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        solve();

        


    }
}