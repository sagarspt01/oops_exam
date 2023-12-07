// area using multiple inheritance
#include<iostream>
using namespace std;
class Area{
    public:
    float a=1,b=2;
    // void getdata(){
    //     cout<<"Enter the value of a"<<endl;
    //     cin>>a;
    //     cout<<"Enter the value of b"<<endl;
    //     cin>>b;
    // }
};
class Circle:private Area{
    public:
    float result;
    Circle(){
        result=3.14*a*a;
        // cout<<"The area of circle is "<<3.14*a*a<<endl;
    }
};
class Triangle:private Area{
    public:
    float result2;
    Triangle(){
        result2=0.5*a*b;
        // cout<<"The area of triangle is "<<0.5*a*b<<endl;
    }
};
class Square:private Area{
    public:
    float result3;
    Square(){
        result3=a*a;
        // cout<<"The area of square is "<<a*a<<endl;
    }
};
class Rectangle:private Area{
    public:
    float result4;
    Rectangle(){
        result4=a*b;
        // cout<<"The area of circle is "<<a*b<<endl;
    }
};
class AllArea:private Circle,Triangle,Square,Rectangle{
    public:
    AllArea(){
        cout<<"The area of circle is "<<result<<endl;
        cout<<"The area of triangle is "<<result2<<endl;
        cout<<"The area of square is "<<result3<<endl;
        cout<<"The area of circle is "<<result4<<endl;
    }
};
int main(){
    // Area p;
    // p.getdata();
    AllArea a;

return 0;
}