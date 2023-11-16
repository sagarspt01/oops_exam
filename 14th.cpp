// square of a number
#include<iostream>
using namespace std;
int squr(int n){
    int result=n*n;
    return result;
}
float squr(float m){
    float result=m*m;
    return result;
}
int main(){
    int n=4;
    float m=3.14;
    cout<<"n^2"<<squr(n)<<endl;
    cout<<"m^2"<<squr(m)<<endl;
return 0;
}