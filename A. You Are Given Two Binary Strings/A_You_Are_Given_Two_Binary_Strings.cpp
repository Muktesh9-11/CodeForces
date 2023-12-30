#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//vector<int> answer;
//string current;


void solve(){
   string s1;
   cin>>s1;
   string s2;
   cin>>s2;

   int temp=0;
   int k=0;

   for(int i=s2.length()-1;i>=0;i--){
     if(s2[i]=='1'){
        temp=s2.length()-i;
        break;
     }
   }

    for(int i=s1.length()-temp;i>=0;i--){
        if(s1[i]=='0'){
            k++;
        }
        else {
            cout<<k<<endl;
            break;
        }
    }

}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        solve();


        


    }
}