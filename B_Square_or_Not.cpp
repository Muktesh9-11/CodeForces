#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

string solve(int n,string s){

    int x= sqrt(n);
    if(x*x!=n) return "no";

    int cnt0=count(s.begin(),s.end(),'0');

    if(n==1 && s[0]=='1') return "yes";
    if((x-2)*(x-2)== cnt0) return "yes";

    return "no";


}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int n;
        cin>>n;
        string s;
        cin>>s;

        cout<<solve(n,s)<<endl;

    }
}