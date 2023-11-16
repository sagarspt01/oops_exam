// extra
#include<iostream>
using namespace std;
class A{
    public:
    char name[20];
    int age;
};
class B: public A{
    public:
    int reg_no;
};
class C: public B{
    public:
    float height;
    float weight;
};
class D{
    public:
    char clg[20];
};
class You:public C,D{
    public:
    void getdata(){
        cin>>name>>reg_no>>height>>weight>>clg;
    }
    void show(){
        cout<<name<<reg_no<<height<<weight<<clg<<endl;
    }
};
// using namespace std;
int main(){
    You y;
    y.getdata();
    y.show();
return 0;
}