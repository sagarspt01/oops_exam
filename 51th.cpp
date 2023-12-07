// normal function template
#include<iostream>
using namespace std;
template<class T>
void show(T x){
    cout<<"x="<<x<<"size of x is "<<sizeof(x)<<endl;
}
int main(){
    show(5);
    show('a');
return 0;
}