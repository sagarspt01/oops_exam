// declaration of static member function from main
#include<iostream>
using namespace std;
class App{
    private:
    static int x;
    public:
    static void count(){
        x++;
    }
    static void display(){
        cout<<x;
    }
};
int App :: x=2;
int main(){
    App :: count();
    App :: display();
return 0;
}

// Your code is almost correct, but there is a small issue related to how you're using static members in your App class. 
// Since x is a static member, it belongs to the class rather than individual instances of the class. 
// You should access it using the class name, not through an instance of the class.