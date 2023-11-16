// hybridinheritance
#include<iostream>
using namespace std;
class Area{
    public:
    float a=1,b=2;

};
class Circle:private Area{
    public:
    float result;
    Circle(){
        result=3.14*a*a;
    }
};
class Triangle:private Area{
    public:
    float result2;
    Triangle(){
        result2=0.5*a*b;
    }
};
class Square:private Area{
    public:
    float result3;
    Square(){
        result3=a*a;
    }
};
class Rectangle:private Area{
    public:
    float result4;
    Rectangle(){
        result4=a*b;
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
    Area p;
    AllArea a;

return 0;
}