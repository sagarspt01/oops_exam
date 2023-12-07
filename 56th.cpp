// multi catch need same no. of throw
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
    catch(char g){
        cout<<"greater"<<endl;
    }
    catch(double h){
        cout<<"lesser"<<endl;
    }
}
int main(){
  funs(0);
  funs(10);
  funs(-6);
return 0;
}