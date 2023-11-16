// size of object
#include<iostream>
using namespace std;
class Student{
    private:
    int a;
    int b;
    void data(){
        cout<<"enter";
        cin>>a>>b;
    }
    void display(){
        cout<<a<<"  "<<b<<endl;
    }
    protected:
    int c;
    int d;
    void data2(){
        cout<<"enter";
        cin>>c>>d;
    }
    void display2(){
        cout<<c<<"  "<<d<<endl;
    }
    public:
    int e;
    int f;
    void data3(){
        cout<<"enter";
        cin>>e>>f;
    }
    void display3(){
        cout<<e<<"  "<<f<<endl;
        data2();
        display2();
        data();
        display();
    }
};
int main(){
    Student s;
    cout<<sizeof(s)<<endl;
return 0;
}