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
        vector<int> arr(8001);
        vector<int> temp(8001);
        int count=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            temp[i+1]=0;
        }

        for(int left=0;left<n;++left){
            int sum=arr[left];
            for(int right=left+1;right<n;++right){
                sum+=arr[right];
                //auto t=find(temp.begin(), temp.end(), sum);
                /*if (t != temp.end()) {
                    count++;
                    temp[t-temp.begin()]=INT_MAX;
                }*/

                if(sum>n) break;
                temp[sum]=1;
        }
        }

        for(int i=0;i<n;++i){
            if(temp[arr[i]]) count++;
        }
        cout<<count<<endl;

        //sort(arr.begin(),arr.end());
        
    }
}