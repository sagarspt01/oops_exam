// inline function ()
#include<iostream>
using namespace std;
int sum(int a,int b,int c);
int main(){
    int a,b,c,p;
    // cin>>a>>b>>c;
    p=sum(1,2,3);
    cout<<p;
return 0;
}
inline int sum(int a,int b,int c){
    int result=a+b+c;
    return result;
}