// overrighting
#include<iostream>
using namespace std;

class First {
    int a;
public:
    First() {
        a = 10;
    }
    void display() {
        cout << a << endl;
    }
};

class Second :public First{
    int b;
public:
    Second() {
        b = 20;
    }
    void display() {
        cout << b << endl;
    }
};

int main() {
    First f, *p;
    p = &f;
    p->display();
    Second d;
    p = &d; 
    p->display();
    return 0;
}
