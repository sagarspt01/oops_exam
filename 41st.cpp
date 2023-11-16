// constructor multiple Inheritance
#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"constructor A"<<endl;
    }
    ~A(){
        cout<<"destructor A"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"constructor B"<<endl;
    }
    ~B(){
        cout<<"destructor B"<<endl;
    }
};
class C:public A,B{
    public:
    C(){
        cout<<"constructor C"<<endl;
    }
    ~C(){
        cout<<"destructor C"<<endl;
    }
};
int main(){
    C c;
return 0;
}