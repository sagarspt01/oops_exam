//addition of 2 complex number using constructor
#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imag;
    // default constructor
    Complex(){
        real=50;
        imag=40;
    }
    Complex(int x, int y){
        real=x;
        imag=y;
    }
    Complex sum(Complex c1,Complex c2){
        Complex c3;
        c3.real=c1.real+c2.real;
        c3.imag=c1.imag+c2.imag;
        return c3;
    }
    // void display(){

    // }
};
int main(){
  Complex c1;
  cout<<"The 1st number is "<<c1.real<<"+i"<<c1.imag<<endl;
  Complex c2(2,3);
cout<<"The 1st number is "<<c2.real<<"+i"<<c2.imag<<endl;
Complex c3=c3.sum(c1,c2);
cout<<"The 1st number is "<<c3.real<<"+i"<<c3.imag<<endl;
return 0;
}