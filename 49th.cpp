// complex addition using operator overloading with friend fun

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

    // Declare the friend function
    friend Complex operator+(const Complex& obj1, const Complex& obj2);
};

// Define the friend function to overload the + operator
Complex operator+(const Complex& obj1, const Complex& obj2)
{
    Complex temp;
    temp.real = obj1.real + obj2.real;
    temp.imag = obj1.imag + obj2.imag;
    return temp;
}

int main()
{
    Complex x(1, 2), y(3, 4), C;
    x.display();
    y.display();

    // Use the overloaded + operator with the friend function
    C = x + y;

    C.display();
    return 0;
}
