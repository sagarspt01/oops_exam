// friend function
#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imag;

public:
    Complex()
    {
        real = 10;
        imag = 20;
    }
    Complex(int i, int j)
    {
        real = i;
        imag = j;
    }
    void display()
    {
        cout << real << "+i" << imag << endl;
    }
    friend Complex operator+(Complex, Complex);
};
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main()
{
    Complex x(1, 2), y(3, 4), C;
    x.display();
    y.display();
    C = x + y;
    C.display();
    return 0;
}