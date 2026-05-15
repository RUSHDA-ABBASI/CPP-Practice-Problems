#include<iostream>

using namespace std;
template< class T1 = int, class T2 = float>

class myClass{
    public:
    T1 a;
    T2 b;
    myClass(T1 x, T2 y){
        a = x;
        b = y;
    }
    void display(){
        cout<<a<<endl<<b;
    }
};
int main(){
    myClass<> obj(1,2);
    obj.display();

    return 0;
}