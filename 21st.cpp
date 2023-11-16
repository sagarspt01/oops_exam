// define private static member function and invoke
#include<iostream>
using namespace std;
class App{
    private:
    static int x;
    // count is in private section
    static void count(){
        x++;
    }
    public:
    static void display(){
        count();
        cout<<x;
    }
};
int App :: x=2;
int main(){
    App :: display();
return 0;
}
