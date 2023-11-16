// cube using inline
#include<iostream>
using namespace std;
int cube(int a);
int main(){
    int a=3,p;
    // cin>>a>>b>>c;
    p=cube(3);
    cout<<p;
return 0;
}
inline int cube(int a){
    int result=a*a*a;
    return result;
}