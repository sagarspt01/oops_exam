// complex addition using operator overloading
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
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
};
int main()
{
    Complex x(1, 2), y(3, 4), C;
    x.display();
    y.display();
    C = x + y;
    C.display();
    return 0;
}