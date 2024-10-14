#include<iostream>
using namespace std;

class student{
    private:
        int id,sub1,sub2,sub3;
        char name[20];

    public:
        void getname();
        void getid();
        void getmarks();
        void display();
        float calculate();
};

void student :: getname(){
    cout<<"\n Enter name : ";
    cin>>name;
}

void student :: getid(){
    cout<<"\nEnter id : ";
    cin>>id;
}

void student :: getmarks(){
    cout<<"\nEnter 1st subject marks : ";
    cin>>sub1;
    cout<<"\nEnter 2nd subject marks : ";
    cin>>sub2;
    cout<<"\nEnter 3rd subject marks : ";
    cin>>sub3;
}

float student :: calculate(){
    return (sub1+sub2+sub3)/3;
}

void student :: display(){
    cout<<"\nNEW STUDENT DETAILS\n";
    cout<<"Student id : "<<id<<endl;
    cout<<"Student name : "<<name<<endl;
    cout<<"Student marks of sub1, sub2, sub3 : "<<sub1<<" "<<sub2<<" "<<sub3<<endl;
}


int main(){
    int n;
    student s[5];
    cout<<"\nEnter number of students : ";
    cin>>n;
    for(int i=0;i<n;i++){
        s[i].getid();
        s[i].getname();
        s[i].getmarks();
    }
    for(int i=0;i<n;i++){
        s[i].display();
        cout<<"Student percentage : "<<s[i].calculate()<<" %"<<endl;
    }
    student *p;
    p=new student;
    p->getid();
    p->getname();
    p->getmarks();
    p->display();
    cout<<"Student percentage : "<<p->calculate()<<" %";

    delete p;
}