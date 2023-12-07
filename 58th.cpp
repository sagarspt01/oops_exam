// inheritance
// #include<iostream>
// using namespace std;
// template<class T>
// class one{
//     public:
//     T x,y;
// };
// template<class S>
// class two:public one<S>{
//     S z;
//     public:
//     two(S m,S n,S o){
//         x=m;
//         y=n;
//         z=o;
//     }
//     void display(){
//         cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
//     }
// };
// int main(){
// two<int> i(1,2,3);
// return 0;
// }

#include<iostream>
using namespace std;

template<class T>
class one {
public:
    T x, y;
};

template<class S>
class two : public one<S> {
    S z;

public:
    two(S m, S n, S o) {
        this->x = m;
        this->y = n;
        this->z = o;
    }

    void display() {
        cout << "x=" << this->x << " y=" << this->y << " z=" << this->z << endl;
    }
};

int main() {
    two<int> i(1, 2, 3);
    i.display();
    return 0;
}