#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

int checkfinal(string s){
    int x;
    cout<<"! "<<s<<endl;
    cin>>x;
    return x;
}

int check0(string s){
    int op;
    cout<<"? "<<s<<"0"<<endl;
    cin>>op;
    return op;
}

int check1(string s){
    int op;
    cout<<"? "<<s<<"1"<<endl;
    cin>>op;
    return op;
}

/*int backcheck(string s){
    int op;
    cout<<"? "<<"0"<<s<<endl;
    cin>>op;
    return op;
}*/

string solve(string s, int n){

    if(s.size()==n && checkfinal(s)==1) return "! "+s;
    if(check0(s)==1) {
        return solve(s+="0",n);
    }
    else if(check1(s)==1){
        return solve(s+="1",n);
    }
    /*else if(backcheck(s)==1){
        return solve("0"+s,n);
    }
    else return solve("0"+s,n);*/
    else{
        if(s[0]==)
    }

    
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int n;
        cin>>n;

        cout<<solve("", n)<<endl;
        cout.flush();
        
    }
}