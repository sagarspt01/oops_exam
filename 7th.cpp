// leap year or not
#include<iostream>
using namespace std;
int main(){
    int yr;
    yr=2000;
    if((yr%400==0)||(yr%4==0 && yr%100!=0)){
        cout<<"leap";
    }
    else{
        cout<<"not leap";
    }
return 0;
}