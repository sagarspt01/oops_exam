// armstrong or not
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,copy,count=0,digit;
    double sum=0;
    cin>>n;
    copy=n;
    while (n)
    {
        n%10;
        count++;
        n=n/10;
    }
    n=copy;
    while (n)
    {
        digit=n%10;
        sum=sum+pow(digit,count);
        n=n/10;
    }
    n=copy;
    if(n==sum) cout<<"armstrong"<<endl;
    else cout<<"not armstrong"<<endl;
    
return 0;
}