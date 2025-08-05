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
//INT_MAX=2,147,483,647
//LLONG_MAX=9,223,372,036,854,775,807

//Mathematical Functions
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if((n & (n-1)) == 0) return true;else return false;}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
#define Num_of_Digits(n) ((int)log10(n) + 1)
ll sum_of_digits(int n) {ll sum = 0;while(n){sum += (n%10);n/=10;}return sum;}
//ll fact(ll n){return n<2?1:n*fact(n-1);}
ll factorial(ll n){ll ans=1;for(int i=1; i<=n; i++){ans = (ans*i) % MOD;}return ans;}
ll comb(ll n,ll r){r>n-r?r=n-r:0;ll res=1;for(ll i=1;i<=r;++i)res*=n-r+i,res/=i;return res;}

//ROTATE A MATRIX
vector<vector<ll> >rot90(vector<vector<long long> >matrix){int n=matrix.size();for(int i=0;i<n;i++){for(int j=i+1;j<n;j++){swap(matrix[i][j],matrix[j][i]);}}for(int i=0;i<n;i++){reverse(all(matrix[i]));}return matrix;}
// PREFIX SUM ARRAY
vector<ll> prefixSum(vector<ll> arr, ll n){
  vector<ll> prefixSumArr(n,0);prefixSumArr[0] = arr[0];for(ll i = 1; i < n; i ++){prefixSumArr[i] = prefixSumArr[i - 1] + arr[i];}return prefixSumArr;
}


//BITS
#define set_bits(x) __builtin_popcountll(x)
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Sieve of Eratosthenes:
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// cmd + option + down/up
// cmd + d
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve(){
    //code here
    string n;
    cin>>n;
    ll count = 0;
    ll sz = n.size();

    if(sz<=2) cout<<"NO"<<endl;
    
    else if(n[0] == '1' && n[1] == '0'){
        if(n[2] == '0') cout<<"NO"<<endl;
        else if(n.size() == 3 && n[2] == '1') cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
}
