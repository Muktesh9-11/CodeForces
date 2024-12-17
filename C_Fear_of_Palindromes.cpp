#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define pb push_back

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int checkx = 0, checky = 0;

int lcs(string X, string Y, int m, int n){
   int L[m + 1][n + 1];
   int i, j, index;
   for (i = 0; i <= m; i++) {
      for (j = 0; j <= n; j++) {
         if (i == 0 || j == 0)
            L[i][j] = 0;
         else if (X[i - 1] == Y[j - 1]) {
            L[i][j] = L[i - 1][j - 1] + 1;
         } else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);
      }
   }
   index = L[m][n];
   char LCS[index + 1];
   LCS[index] = '\0';
   i = m, j = n;
   while (i > 0 && j > 0) {
      if (X[i - 1] == Y[j - 1]) {
         LCS[index - 1] = X[i - 1];
         if(i==m) checkx++;
         if(j==n) checky++;
         i--;
         j--;
         index--;
      } else if (L[i - 1][j] > L[i][j - 1]) i--;
      else j--;
   }
   //printf("LCS: %s\n", LCS);
   return L[m][n];
}

int solve(){
    
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int m = s1.size();
    int n = s2.size();
    
    reverse(s2.begin(),s2.end());

    int x = lcs(s1,s2,m,n);
    x*=2;
    if((checkx==0 || checky ==0) && x>0) x++;
    return x;

}

int main(){
        //code here
        int t;
        cin>>t;
        while(t-- > 0){
            cout<<solve()<<endl;
        }
}




