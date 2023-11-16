// add 2 complex number using friend
#include<iostream>
using namespace std;
class Complex{
    private:
    int x,y;
    friend Complex add(Complex,Complex);
    public:
    void getdata(){
        cout<<"enter";
        cin>>x>>y;
    }
    void display(){
        cout<<x<<"+i"<<y<<endl;
    }
};
Complex add(Complex a,Complex b){
    Complex c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;
}
int main(){
    Complex a,b,c;
    a.getdata();
    b.getdata();
    c=add(a,b); //check it
    c.display();
return 0;
}

