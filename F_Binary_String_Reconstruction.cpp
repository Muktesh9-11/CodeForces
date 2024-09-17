#include<bits/stdc++.h>
#include<iostream>
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

        // 1111110010
        // 1100
        // 1111000010101010
        // 1111
        // 111110     (0,2,4)
        
        int n0,n1,n2;
        cin>>n0>>n1>>n2;
        string s;

        if(n2!=0){
        int temp1=n2+1;
        while(temp1>0){
            s+='1';
            temp1--;
        }
        }

        
        if(n0!=0){
        int temp2=n0+1;
        while(temp2>0){
            s+='0';
            temp2--;
        }
        }

        if(n2==0 && n0==0 && n1>0) {
            s+="10";
            n1--;
        }
        if(n1!=0){
            int temp3=n1;
        if(n2!=0 && n0!=0) temp3--;
        while(temp3>0){
            if(s[s.size()-1]=='0') s+='1';
            else s+='0';
            temp3--;
        }
        }

        cout<<s<<endl;

    }
}