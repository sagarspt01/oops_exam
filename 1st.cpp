// call by value
#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int x,y;
    x=4;y=5;
    cout<<"x="<<x<<"y="<<y<<endl;
    swap(x,y);
    cout<<"x="<<x<<"y="<<y;
return 0;
}