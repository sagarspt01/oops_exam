// for mul parameter
#include<iostream>
using namespace std;
template<class T1,class T2>
class myApp{
    T1 x;
    T2 y;
    public:
    myApp(T1 u,T2 v){
        x=u;
        y=v;
    }
    void display(){
        cout<<"x="<<x<<"y="<<y<<endl;
    }
};
int main(){
    myApp <char,int> obj('a',5);
    obj.display();
return 0;
}