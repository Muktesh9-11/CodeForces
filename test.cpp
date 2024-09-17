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

    int cnt0=0,cnt1=0,flag=0;
    int fr0;
    for(int i=0;i<n;i++){
        if(flag==0 && s[i]=='0'){
            flag++;
            fr0=i;
        }
        if(s[i]=='0') cnt0++;
        else cnt1++;
    }

    if((n-cnt1)!=cnt0) return "no";

    int r,c;
    c=fr0-1;
    r=n/c;

    flag=0;
    for(int i=0;i<c-1;i++){
        if(s[i]=='0') return "no";
        if(s[n-i-1]=='0') return "no";
    }
    for(int i=1;i<=r;i++){
        if(s[(i-1)*c+1]=='0') return "no";
        if(s[(i-1)*c+(c)]=='0') return "no";
    }

    return "yes";


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