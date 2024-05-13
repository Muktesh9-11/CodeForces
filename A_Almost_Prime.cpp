#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t=1;
    //cin>>t;
    while(t-->0){
        //code here
        
int n; cin>>n;
int ans=0;
for (int i=2;i<=n;i++){
int num=i; 
int cnt=0;
for(int j=2;j*j<=num;j++){
if (num % j==0){
cnt++;
while (num%j==0){
num/=j;
}
}
if(cnt>2) break;
}
if(num>1){
cnt++;
}
if (cnt==2){
ans++;
}
}

cout<<ans<<endl;
}
}
