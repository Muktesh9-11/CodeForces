#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define fori(i,a,n) for(int i=a;i<n;i++)
#define forj(j,b,n) for(int j=b;j<n;j++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define pi (3.141592653589)
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()


string toBinaryString(long long num, int bits = 61) {
    string bin = bitset<61>(num).to_string();
    return bin.substr(bin.size() - bits); // Ensure exactly 61 bits
}

int main(){
    
    ll t;
    cin>>t;
    while(t--){
        ll b,c,d;
        cin>>b>>c>>d;

        string sb,sc,sd;
        sb = toBinaryString(b,61);
        sc = toBinaryString(c,61);
        sd = toBinaryString(d,61);

        string sa = "";
        ll flag = 0;
        for(ll i=0;i<61;i++){
            if(sb[i]=='0' && sc[i]=='1' && sd[i]=='1'){
                flag = 1;
                break;
                //sa += '0';
            }
            else if(sb[i]=='1' && sc[i]=='0' && sd[i]=='0'){
                flag = 1;
                break;
                //sa += '0';
            }
            else if(sb[i]=='0' && sc[i]=='0' && sd[i]=='0'){
                sa += '0';
            }
            else if(sb[i]=='0' && sc[i]=='0' && sd[i]=='1'){
                sa += '1';
            }
            else if(sb[i]=='0' && sc[i]=='1' && sd[i]=='0'){
                sa += '1';
            }
            else if(sb[i]=='1' && sc[i]=='0' && sd[i]=='1'){
                sa += '0';
            }
            else if(sb[i]=='1' && sc[i]=='1' && sd[i]=='0'){
                sa += '1';
            }
            else if(sb[i]=='1' && sc[i]=='1' && sd[i]=='1'){
                sa += '0';
            }
        }

        //cout<<sa<<endl;
        
        //ll ans = binaryToDecimal(sa);
        long long ans = bitset<64>(sa).to_ullong();

        if(flag == 0){
            cout<<ans<<endl;
        }
        else cout<<-1<<endl;

    }

}