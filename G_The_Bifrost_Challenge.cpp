#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define fori(i,a,n) for(ll i=a;i<n;i++)
#define forj(j,b,n) for(ll j=b;j<n;j++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define pi (3.141592653589)
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
//ll_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

//Mathematical Functions
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ll i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(ll n){if((n & (n-1)) == 0) return true;else return false;}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
#define Num_of_Digits(n) ((ll)log10(n) + 1)
ll sum_of_digits(ll n) {ll sum = 0;while(n){sum += (n%10);n/=10;}return sum;}
//ll fact(ll n){return n<2?1:n*fact(n-1);}
ll factorial(ll n){ll ans=1;for(ll i=1; i<=n; i++){ans = (ans*i) % MOD;}return ans;}
ll comb(ll n,ll r){r>n-r?r=n-r:0;ll res=1;for(ll i=1;i<=r;++i)res*=n-r+i,res/=i;return res;}

//ROTATE A MATRIX
vector<vector<ll> >rot90(vector<vector<long long> >matrix){ll n=matrix.size();for(ll i=0;i<n;i++){for(ll j=i+1;j<n;j++){swap(matrix[i][j],matrix[j][i]);}}for(ll i=0;i<n;i++){reverse(all(matrix[i]));}return matrix;}
// PREFIX SUM ARRAY
vector<ll> prefixSum(vector<ll> arr, ll n){
  vector<ll> prefixSumArr(n,0);prefixSumArr[0] = arr[0];for(ll i = 1; i < n; i ++){prefixSumArr[i] = prefixSumArr[i - 1] + arr[i];}return prefixSumArr;
}


//BITS
#define set_bits(x) __builtin_popcountll(x)
string decToBinary(ll n){string s="";ll i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;ll base = 1;ll len = num.length();for(ll i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Sieve of Eratosthenes:
vector<ll> sieve(ll n) {ll*arr = new ll[n + 1](); vector<ll> vect; for (ll i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (ll j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// cmd + option + down/up
// cmd + d
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


ll ans = 0;
//ll temp = 0;

void solve(vector<vector<ll> > adj,vector<vector<ll> > wt,vector<ll>vis, ll node, ll b,ll weight){
        vis[node] = 1;
        if(node == b) {
            ans = weight;
            exit;
        }

        for(ll i=0;i<adj[node].size();i++){
            if(!vis[adj[node][i]]){
                ll temp = weight;
                weight = max(weight,wt[node][i]);
                solve(adj,wt,vis,adj[node][i],b,weight);
                weight = temp;
            }
        }
}


int main(){
        //code here

        ll n,q;
        cin>>n>>q;

        vector<vector<ll> > adj(n+1);
        vector<vector<ll> > wt(n+1);
        for(ll i=1;i<n;i++){
            ll a,b,w;
            cin>>a>>b>>w;
            adj[a].pb(b);
            wt[a].pb(w);
            adj[b].pb(a);
            wt[b].pb(w);
        }

        vector<pair<ll,ll> > qry(q);
        for(ll i=0;i<q;i++){
            cin>>qry[i].first>>qry[i].second;
        }

        vector<ll> vis(n+1,0);
        for(ll i=0;i<q;i++){
            solve(adj,wt,vis,qry[i].first,qry[i].second,0);
            cout<<ans<<endl;
        }



}