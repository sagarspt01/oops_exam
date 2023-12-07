// error handeling
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int j=(x>y)?0:1;
    try{
        if(j==0){
            cout<<"true"<<endl;
        }
        else{
            throw(j);//need j
        }
    }
    catch(int m){
        cout<<"error found 'false'"<<endl;
    }
return 0;
}