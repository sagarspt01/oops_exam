// virtual base class
#include<iostream>
using namespace std;
class Area{
    public:
    float a=1,b=2,c1;
    void area1()
    {
    c1=3.14*a*a;
    cout<<"\narea1="<<c1;
    }
};
class Circle:public Area{
    public:
    float result;
    
};
class Triangle:public Area{
    public:
    float result2;
    // Triangle(){
    //     result2=0.5*a*b;
    // }
    void area2()
    {
        result2=0.5*a*b;
        cout<<"\nresult2="<<result2;
    }
    
};
class Square:public Area{
    public:
    float result3;
    Square(){
        result3=a*a;
    }
};
class Rectangle:public Area{
    public:
    float result4;
    Rectangle(){
        result4=a*b;
    }
};
class AllArea:public Circle,Triangle,Square,Rectangle{

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

// #include <iostream> 
// using namespace std; 

// class A { 
// public: 
// 	int a; 
// 	A() // constructor 
// 	{ 
// 		a = 10; 
// 	} 
// }; 

// class B : public virtual A { 
// }; 

// class C : public virtual A { 
// }; 

// class D : public B, public C { 
// }; 

// int main() 
// { 
// 	D object; // object creation of class d 
// 	cout << "a = " << object.a << endl; 

// 	return 0; 
// } 
