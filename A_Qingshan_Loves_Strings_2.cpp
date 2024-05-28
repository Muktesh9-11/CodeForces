#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t-->0){
        //code here
        
        int n;
        cin>>n;
        string s;
        cin>>s;

        int cnt0=0,cnt1=0;
        for(int i=0;i<s.length();++i){
            cnt0+=s[i]=='0';
            cnt1+=s[i]=='1';

        }
        if(cnt0!=cnt1){
            cout<<-1<<endl;
            continue;
        }

        vector<int>ans;
        deque<char>characters;

        for (int i = 0; i < s.length(); ++i){
            characters.push_back(s[i]);
        }
        
        int d=0;
        while(!characters.empty()){
            if(characters.front()==characters.back()){
                if(characters.front()=='0'){
                    characters.push_back('0');
                    characters.push_back('1');
                    ans.push_back(n-d);
                }
                else{
                    characters.push_front('1');
                    characters.push_front('0');
                    ans.push_back(0+d);
                }
                n+=2;
            }
            while(!characters.empty() && characters.front()!=characters.back()){
                characters.pop_back();
                characters.pop_front();
                ++d;
            }

        }

        cout<<ans.size()<<endl;
        if(ans.size()==0){
            cout<<endl;
            continue;
        }
        for(auto it : ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}

// 0,1