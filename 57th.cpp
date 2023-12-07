// template overloading like fun overloading
#include<iostream>
using namespace std;
template<class T>
void show(T x){
    cout<<"x="<<x<<endl;
}
void show(int y){
    cout<<"y="<<y<<endl;
}
void show(char z){
    cout<<"z="<<z<<endl;
}
int main(){
    show('a');
    show(8);
    show(3.2);
return 0;
}