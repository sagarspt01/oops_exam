// inline member function outside class
#include<iostream>
using namespace std;
class Man{
    private:
    int a;
    int b;
    void getdata(){
        a=10;
        b=20;
    }
    public:
    void show();
};
inline void Man::show(){
    getdata();
    cout<<a<<"  "<<b<<endl;
}
int main(){
    Man m;
    m.show();
return 0;
}