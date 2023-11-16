#include<iostream>
using namespace std;
class A{
    public:
    int a;
};
class B:virtual public A{
    public:
    int b;
};
class C:virtual public A{
    public:
    int c;

};
class D: public B,C{
    public:
    int d;
    D(){
        a=10;
        b=20;
        c=30;
        d=40;
    }
    void display(){
        cout<<"Value of a="<<a<<endl;
        cout<<"Value of b="<<b<<endl;
        cout<<"Value of c="<<c<<endl;
        cout<<"Value of d="<<d<<endl;
    }
};
int main(){
    D d;
    d.display();
return 0;
}