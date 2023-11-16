// declare static object and show
#include<iostream>
using namespace std;
class App{
    private:
    int x;
    public:
    void add10(){
        x=x+10;
    }
    void display(){
        cout<<x;
    }
};
int main(){
    static App a;
    a.display();
    a.add10();
    cout<<"\n";
    a.display();
return 0;
}
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=0;i<10;i++){
//         static int x=10; //execute only once
//         x=x+1;
//         cout<<x<<endl;
//     }
// return 0;
// }