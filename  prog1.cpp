#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"===CHECKING IF A NUMBER IS PRIME==="<<endl;
    cout<<"Enter a number:";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout << "not prime" << endl;
            break;
        }
    }
    if(i == n){
        cout << "prime" << endl;
    }
    return 0;
}