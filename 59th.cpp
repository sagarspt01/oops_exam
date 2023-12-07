// single catch need no. of throw
#include<iostream>
using namespace std;
void funs(int k){
    try{
        if(k==0){
            cout<<"k==0"<<endl;
        }
        else if(k>0){
            throw 'p';//for char
        }
        else{
            throw .9;
        }
    }
    catch(...){
        cout<<"error"<<endl;
    }
}
int main(){
  funs(0);
  funs(10);
  funs(-6);
return 0;
}