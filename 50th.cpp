// show values of diffrent myclassptype using using constructor and template
#include<iostream>
using namespace std;
template<class T>
class myclassp{
    public:
    myclassp(T c){
        cout<<"c="<<c<<"size of c is"<<sizeof(c)<<endl;
    }
};
int main(){
    myclassp<int> i(1);
return 0;
}
