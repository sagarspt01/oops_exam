// avg mark
#include<iostream>
using namespace std;
class Marks{
    protected:
    float dsa=10;
    float oops=20;
    float maths=30;
    float ee=40;
    float de=50;
    // Marks(float m1,float m2,float m3,float m4,float m5){
    //     dsa=m1;
    //     oops=m2;
    //     maths=m3;
    //     ee=m4;
    //     de=m5;
    // }
};
class Avrage:public Marks{
    public:
    float result;
    Avrage(){
        result=(dsa+oops+maths+ee+de)/5;
        cout<<"Avrage of marks is :"<<result<<endl;
    }
    // void display(){
    //     result=(dsa+oops+maths+ee+de)/5;
    //     cout<<"Avrage of marks is :"<<result<<endl;
    // }
};
int main(){
    Marks a;
    Avrage a2;
    // a2.display();
return 0;
}