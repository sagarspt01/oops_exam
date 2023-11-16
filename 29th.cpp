//cpy constructor
#include<iostream>
using namespace std;
class A{
    int x,y,z,p;
    public:
    A(int s,int u){
        x=s;
        y=u;
        cout<<"The value of x and y is "<<x<<"&"<<y<<endl;
    }
    A(A &ref){
        z=ref.x;
        p=ref.y;
        cout<<"The value of z and p is "<<z<<"&"<<p<<endl;
    }
    // A(int s,int u){
    //     x=s;
    //     y=u;
    //     cout<<"The value of x and y is "<<x<<"&"<<y<<endl;
    // }
    // A(A &ref){
    //     z=ref.x;
    //     p=ref.y;
    // }
    // void display(){
    //     cout<<"The value of z and p is "<<z<<"&"<<p<<endl;
    // }
};
int main(){
    A a1(2,3);
    A a2=a1;
return 0;
}