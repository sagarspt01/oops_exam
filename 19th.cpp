// create array of object disp content
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int regno;

public:
    void getdata() {
        name = "Sagar";
        age = 20;
        regno = 56;
    }

    void show() {
        getdata();
        cout << name << "   " << age << "  " << regno << endl;
    }
};

int main() {
    Student s[3];
    for(int i=0;i<3;i++){
        s[i].getdata();
        s[i].show();
    }
    return 0;
}
