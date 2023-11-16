// area using multilevel inheritance
#include<iostream>
using namespace std;
class Circle{
    public:
    float a=1,b=2;
    float result;
    Circle(){
        result=3.14*a*a;
    }
};
class Triangle:public Circle{
    public:
    float result2;
    Triangle(){
        result2=0.5*a*b;
    }
};
class Square:public Triangle{
    public:
    float result3;
    Square(){
        result3=a*a;
    }
};
class Rectangle:public Square{
    public:
    float result4;
    Rectangle(){
        result4=a*b;
        cout<<"The area of circle is "<<result<<endl;
        cout<<"The area of triangle is "<<result2<<endl;
        cout<<"The area of square is "<<result3<<endl;
        cout<<"The area of circle is "<<result4<<endl;
    }
};
int main(){
   Rectangle r;

return 0;
}