#include<bits/stdc++.h>
#include<iostream>
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
        
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int left=1,right=n-1;
        int a=arr[0],b=0;
        int tempa=arr[0],tempb=0,moves=1;
        //int lmoves=1,rmoves=0;
        while(right>=left){
            if(tempb==0){
                while(tempa>=tempb && right>=left){
                tempb+=arr[right];
                b+=arr[right];
                right--;
                if(tempb>tempa){
                    tempa=0;
                }
                }
                moves++;
            }
            else if(tempa==0){
                while(tempb>=tempa && right>=left){
                tempa+=arr[left];
                a+=arr[left];
                left++;
                if(tempa>tempb){
                    tempb=0;
                }
                }
                moves++;
            }
        }
        cout<<moves<<" "<<a<<" "<<b<<endl;

    }
}