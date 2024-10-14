#include<bits/stdc++.h>
#include<iostream>
#include<string>
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
        vector<pair<int,int> > arr1(n);
        vector<pair<int,int> > arr2(n);
        vector<pair<int,int> > arr3(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            pair<int, int> p;
            p.first = x;
            p.second = i;
            arr1[i]=p;
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            pair<int, int> p;
            p.first = x;
            p.second = i;
            arr2[i]=p;
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            pair<int, int> p;
            p.first = x;
            p.second = i;
            arr3[i]=p;
        }

        int ans=0;

        sort(arr1.begin(),arr1.end(),greater<pair<int,int> >());
        sort(arr2.begin(),arr2.end(),greater<pair<int,int> >());
        sort(arr3.begin(),arr3.end(),greater<pair<int,int> >());

        for(int i=0;i<3;i++){

            for(int j=0;j<3;j++){
                
                for(int k=0;k<3;k++){
                    if(arr1[i].second!=arr2[j].second && arr1[i].second!=arr3[k].second && arr2[j].second!=arr3[k].second){
                        ans=max(ans, (arr1[i].first + arr2[j].first + arr3[k].first));
                    }
                }
            }
        }
        

        cout<<ans<<endl;
    }
}