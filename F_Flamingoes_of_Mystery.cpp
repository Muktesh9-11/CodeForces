#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    
    int x,y,z;
    cout << "? " << 1 << " " << 3 << endl;
    cin>>x;
    cout << "? " << 1 << " " << 2 << endl;
    cin>>y;
    cout << "? " << 2 << " " << 3 << endl;
    cin>>z;

    a[1]= x-z;
    a[2]= y-a[1];
    a[3]= z-a[2];

    for(int i=4; i<=n ; i++){
        int c;
        cout << "? " << i-1 << " " << i << endl;
        cin>>c;
        a[i]= c - a[i-1];
    }

    cout<<"!";
    for(int i=1;i<=n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
    
}
