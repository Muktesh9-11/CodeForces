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
        
        ll a,b;
        cin>>a>>b;
        ll xk,yk,xq,yq;
        cin>>xk>>yk;
        cin>>xq>>yq;

        ll x1,y1,x2,y2,x3,y3,x4,y4,y5,y6,y7,y8,x5,x6,x7,x8;
        x1 = xk-a;
        y1 = yk+b;
        x2 = xk-a;
        y2 = yk-b;
        x3 = xk+a;
        y3 = yk+b;
        x4 = xk+a;
        y4 = yk-b;

        x5 = xk-b;
        y5 = yk+a;
        x6 = xk-b;
        y6 = yk-a;
        x7 = xk+b;
        y7 = yk+a;
        x8 = xk+b;
        y8 = yk-a;
        set<pair<int,int> > king;
        king = {{x1,y1},{x2,y2},{x3,y3},{x4,y4},{x5,y5},{x6,y6},{x7,y7},{x8,y8}};

        ll x11,y11,x22,y22,x33,y33,x44,y44,y55,y66,y77,y88,x55,x66,x77,x88;
        x11 = xq-a;
        y11 = yq+b;
        x22 = xq-a;
        y22 = yq-b;
        x33 = xq+a;
        y33 = yq+b;
        x44 = xq+a;
        y44 = yq-b;

        x55 = xq-b;
        y55 = yq+a;
        x66 = xq-b;
        y66 = yq-a;
        x77 = xq+b;
        y77 = yq+a;
        x88 = xq+b;
        y88 = yq-a;
        set<pair<int,int> > queen;
        queen = {{x11,y11},{x22,y22},{x33,y33},{x44,y44},{x55,y55},{x66,y66},{x77,y77},{x88,y88}};

        int cnt = 0;
        for(auto it : king){
            if(queen.find(it) != queen.end()){
                cnt++;
            }
        }
        

        cout<<cnt<<endl;

    }
}