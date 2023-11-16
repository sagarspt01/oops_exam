// access private data using friend function for 2 classes
#include<iostream>
using namespace std;
class App2;
class App{
    private:
    int number;
    friend void display(App,App2); //pass class name
    public:
    void getdata(){
        number=100;
    }
};
class App2{
    private:
    int number2;
    friend void display(App,App2); //pass class name
    public:
    void getdata2(){
        number2=200;
    }
};
void display(App x,App2 y){ //pass object
    cout<<x.number<<endl;
    cout<<y.number2<<endl;
}
int main(){
    App a;
    App2 b;
    a.getdata();
    b.getdata2();
    display(a,b); //pass name
return 0;
}