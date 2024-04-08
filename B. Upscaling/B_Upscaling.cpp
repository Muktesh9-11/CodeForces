#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int count=2;
            char h='#';
            char d='.';
            if(i%2==0){
                h='#';
                d='.';
            }
            else{
                h='.';
                d='#';
            }
            while(count--){
                for(int j=0;j<n;j++){
                    for(int x=2;x>0;x--){
                        if(j%2==0){
                            cout<<h;
                        }
                        else cout<<d;
                    }
                }
                cout<<endl;
            }
          
        }


    }
}