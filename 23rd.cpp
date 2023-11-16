// access private data using friend function
#include<iostream>
using namespace std;
class App{
    private:
    int number;
    friend void display(App); //pass class name
    public:
    void getdata(){
        number=100;
    }
};
void display(App x){ //pass object
    cout<<x.number<<endl;
}
int main(){
    App a;
    a.getdata();
    display(a); //pass name
return 0;
}