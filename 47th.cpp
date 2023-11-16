// equal operator overloading
#include <iostream>
#include <string>
using namespace std;

class MyString
{
private:
    string value;

public:
    MyString(const string &str) : value(str) {}

    MyString &operator=(const MyString &other)
    {
        if (this == &other)
        {
            return *this;
        }
        value = other.value;
        return *this;
    }

    bool operator!=(const MyString &other) const
    {
        return value != other.value;
    }

    string getValue() const
    {
        return value;
    }
};

int main()
{
    MyString str1("Hello");
    MyString str2("World");
    MyString str3("Hello");

    str1 = str2;

    cout << "str1 after assignment: " << str1.getValue() << endl;

    if (str1 != str3)
    {
        cout << "str1 and str3 are not equal" << endl;
    }
    else
    {
        cout << "str1 and str3 are equal" << endl;
    }

    return 0;
}
