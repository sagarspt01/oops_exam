// area and volume of cube using multiple inheritance
#include<iostream>
using namespace std;
class Values{
    protected:
    int a=2,b=3;
};
class Area:public Values{
    public:
    int area;
    Area(){
        area=a*a;
    }
};
class Volume:public Values{
    public:
    int volume;
    Volume(){
        volume=a*a*a;
    }
};
class Result:public Area,Volume{
    public:
    // Result(){
    //      cout<<"Area of one side of cube is "<<area<<endl;
    //      cout<<"Volume of cube is "<<volume<<endl;
    // }
    void show(){
         cout<<"Area of one side of cube is "<<area<<endl;
         cout<<"Volume of cube is "<<volume<<endl;
    }
};
int main(){
    Result ss;
    ss.show();
return 0;
}