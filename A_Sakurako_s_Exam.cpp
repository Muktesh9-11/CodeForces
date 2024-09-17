#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

string solve(int x,int y,int a,int b){

    if(x==y) return "yes";

    else if(x>y && a>0){
            x--;
            y++;
            a--;
            return solve(x,y,a,b);
    }
    else if(y>x && b>0){
            x+=2;
            y-=2;
            b--;
            return solve(x,y,a,b);
    }
    return "no";
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int a,b;
        cin>>a>>b;
        int x=a;
        int y=2*b;
        if(x%2==1) cout<<"no"<<endl;
        else{
        cout<<solve(x,y,a,b)<<endl;
        }

    }
}