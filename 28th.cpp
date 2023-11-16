//area by function overloading
#include<iostream>
using namespace std;
class Area{
float a,b,c;
public:
Area(int a){
  cout<<"The area of square is "<<a*a<<endl;
}
Area(int a,int b){
  cout<<"The area of rectangle is "<<a*b<<endl;
}
Area(float a,float b){
  cout<<"The area of triangle is "<<0.5*a*b<<endl;
}
Area(float a){
  cout<<"The area of circle is "<<3.14*a<<endl;
}
Area(float a,float b,float c){
  cout<<"The area of triangle is "<<0.5*(a+b)*c<<endl;
}
};
int main(){
Area square(1);
Area rectangle(2,3);
Area triangle(2.1f,3.1f);//use f bcz more way for typecatsing
Area circle(2.3f);
Area trapisium(2.1f,5.4f,1.2f);
return 0;
}