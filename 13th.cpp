// find area of all using function overloading
#include<iostream>
using namespace std;
int area(int a,int b);
int area(int a);
float area(float c);
int main(){
    int a,b;
    float c;
    int result=area(1,2);
    cout<<result<<endl;
    int result2=area(4);
    cout<<result2<<endl;
    float result3=area(1.23f);
    cout<<result3<<endl;
return 0;
}
int area(int a,int b){
    int result=a*b;
    return result;
}
int area(int a){
    int result=a*a;
    return result;
}
float area(float c){
    float result=3.14*c*c;
    return result;
}