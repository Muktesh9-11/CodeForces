#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=10;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==3){
                break;
            }
            cout<<j<<endl;
        }
    }
}
