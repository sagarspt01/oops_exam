#include <iostream>
using namespace std;
class MyNumber
{
private:
    int value;

public:
    MyNumber(int val) : value(val) {}

    bool operator<(const MyNumber &other) const
    {
        return value < other.value;
    }

    bool operator<=(const MyNumber &other) const
    {
        return value <= other.value;
    }

    int getValue() const
    {
        return value;
    }
};

int main()
{
    MyNumber num1(5);
    MyNumber num2(10);

    if (num1 < num2)
    {
        cout << num1.getValue() << " is less than " << num2.getValue() << endl;
    }
    else
    {
        cout << num1.getValue() << " is not less than " << num2.getValue() << endl;
    }

    if (num1 <= num2)
    {
        cout << num1.getValue() << " is less than or equal to " << num2.getValue() << endl;
    }
    else
    {
        cout << num1.getValue() << " is not less than or equal to " << num2.getValue() << endl;
    }

    return 0;
}