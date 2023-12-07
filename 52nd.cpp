// used for member function
#include<iostream>
using namespace std;
template<class T>
class myApp{
    T x;
    public:
    myApp(T u){
        x=u;
    }
    void display(){
        cout<<"x="<<x<<endl;
    }
};
int main(){
    myApp <char> obj('a');
    obj.display();
return 0;
}