// factorial
#include<iostream>
using namespace std;
int main(){
  int n=3,fac=1;
  for(int i=1;i<=n;i++){
    fac=fac*i;
  }
  cout<<fac;
return 0;
}