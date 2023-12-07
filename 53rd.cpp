// square
#include<iostream>
using namespace std;
template<class T>
class square{
    T x;
    T y;
    public:
    square(T u){
        x=u;
        y=x*x;
    }
    void display(){
        cout<<"x^2="<<y<<endl;
    }
};
int main(){
    square<int> i(5);
    square<float> f(1.2f);
    i.display();
    f.display();
return 0;
}