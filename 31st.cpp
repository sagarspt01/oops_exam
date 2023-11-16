#include<iostream>
using namespace std;
class A{
    protected:
    int x;
};
class B:public A{
    public:
    int y;
    B(){
        x=20;
        y=30;
    }
    void display(){
        cout<<"value of x is:"<<x<<endl;
        cout<<"value of y is:"<<y<<endl;
    }
};
int main(){
    B b;
    b.display();
return 0;
}