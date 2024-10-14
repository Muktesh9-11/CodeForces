#include<iostream>
using namespace std;

class demo{
    private :
        int x;
    
    public:
        demo(){
            cout<<"\nDefault Constructor Called"<<endl;
        }
        demo(int a){
            cout<<"\nValue of x assigned to : "<<a<<endl;
            x=a;
        }
        demo(demo &d, int y){
            cout<<"\nSum of x found using Copy Constructor : ";
            cout<<" "<<d.x + y<<endl;
        }
        ~demo(){
            cout<<"\nDestructor Called Object ended"<<endl;
        }
};

int main(){
    demo d1,d2(10);
    demo d3(d2, 20);
    return 0;
}