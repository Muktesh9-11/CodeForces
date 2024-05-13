#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){

        string s;
        cin>>s;
        int l=s.length();
        while(l>=1){
            l=s.length();
            int count=0;
            for(int i=0;i<l;i++){
                if(s[i]== 0 || s[i]== 1) count;
                else count++;
            }
            if(count==0){
                cout<<"YES"<<endl;
                break;
            }
            else {
                int x= stoi(s);
                if(x%10==0){
                    x=x/10;
                }
                else if(x%11==0){
                    x=x/11;
                }
                else if(x%101==0){
                    x=x/101;
                }
                else {
                    cout<<"NO"<<endl;
                    break;
                }
            
                s=to_string(x);
            }
        }

    }
}