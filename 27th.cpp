//constructur overloading
#include<iostream>
using namespace std;
class A{
    // int a,b,c;
    float a,b,c;
    public:
    //default
    A(){
        a=2;
        b=3;
        c=6;
    }
    //int 
    A(int x,int y,int z){
      a=x;
      b=y;
      c=z;
    }
    //float
    A(float x,float y,float z){
      a=x;
      b=y;
      c=z;
    }
    void display(){
        cout<<"The value of a="<<a<<endl;
        cout<<"The value of b="<<b<<endl;
        cout<<"The value of c="<<c<<endl;
    }
};
int main(){
A c1;
A c2(2,3,4);
A c3(2.1f,2.0f,2.3f);
c1.display();
c2.display();
c3.display();
return 0;
}