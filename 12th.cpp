// highest number using inline
#include<iostream>
using namespace std;
int max(int a,int b);
int main(){
    int a,b,p;
    p=max(1,2);
    cout<<p;
return 0;
}
inline int max(int a,int b){
    int result;
    if(a>b){
        result=a;
    }
    else{
        result=b;
    }
    return result;
}