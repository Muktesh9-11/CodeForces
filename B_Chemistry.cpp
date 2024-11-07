#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

/*bool solve(){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        int oddcnt=0,evencnt=0;
        for(auto it : mpp){
            if(it.second % 2 != 0) oddcnt++;
            else evencnt++;
        }
        if(k<oddcnt-1) return false;
        if(n%2==0){
            if(k%2==0){
                if(oddcnt%2==0 && oddcnt<=k) return true;
                else return false;
            }
            else{
                if(oddcnt%2==0) return false;
                else return true;
            }
        }
        else{
            if(k%2==0){
                if(oddcnt%2==0) return false;
                else return true;
            }
            else{
                if(oddcnt%2==0) return true;
                else return false;
            }
        }
}*/

bool solve(){
    int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        int oddcnt=0,evencnt=0;
        for(auto it : mpp){
            if(it.second % 2 != 0) oddcnt++;
            else evencnt++;
        }

        if(k<oddcnt-1) return false;
        while(k){
            if(oddcnt){
                k--;
                oddcnt--;
                evencnt++;
                n--;
            }
            else{
                k--;
                evencnt--;
                oddcnt++;
                n--;
            }
        }
        if(oddcnt>1) return false;
        if(n%2!=0){
            if(oddcnt==1) return true;
        }
        if(n%2==0 && oddcnt==0) return true;
        return false;

}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        bool x = solve();
        if(x==true) {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}