// multiplication of obj and int y=x*3
#include <iostream>
using namespace std;
class Num
{
    int a, b, c, d;

public:
    void input()
    {
        cout << "Enter the value of a:" << endl;
        cin >> a;
        cout << "Enter the value of b:" << endl;
        cin >> b;
        cout << "Enter the value of c:" << endl;
        cin >> c;
        cout << "Enter the value of d:" << endl;
        cin >> d;
    }
    void display()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
    }
    Num operator*(int t)
    {
        Num temp;
        temp.a = a * t;
        temp.b = b * t;
        temp.c = c * t;
        temp.d = d * t;
        return temp;
    }
};
int main()
{
    Num x, y;
    x.input();
    x.display();
    // y=3*x;
    y = x * 3;
    y.display();
    return 0;
}