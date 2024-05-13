#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;

        int first= stoi(s.substr(0,2));
        string second= s.substr(3,5);
        string AP;
        if(first>11){
            AP=" PM";
        }
        else AP=" AM";

        if(first==0 || first==12){
            cout<<12<<":"<<second<<AP<<endl;
        }
        else if(first%12<10){
            cout<<0<<first%12<<":"<<second<<AP<<endl;
        }
        else cout<<first%12<<":"<<second<<AP<<endl;

    }
}