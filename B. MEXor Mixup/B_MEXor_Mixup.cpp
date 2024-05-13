#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int arr[300000];
    arr[0]=0;
    for(int i=1;i<300000;i++){
        arr[i]= (arr[i-1]^i);
    }
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int a,b;
        cin>>a>>b;
        int xori = arr[a-1];
        
        if(xori==b){
            cout<<a<<endl;
        }
        else if((xori ^ b) == a){
            cout<<a+2<<endl;
        }
        else{
            cout<<a+1<<endl;
        }
    }
}