#include<iostream>
#include<string>
using namespace std;

class C2;
class C1{
    int val1;
    public:
        void inData(int a){
            val1 = a;
        }
        void display(void){
            cout<<val1<<endl;
        }
    friend void exchange(C1&, C2&);
};

class C2{
    int val2;
    public:
        void inData(int b){
            val2 = b;
        }
        void display(void){
            cout<<val2<<endl;
        }
    friend void exchange(C1&, C2&);
};

void exchange(C1 & x, C2 & y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){
    C1 obj1;
    C2 obj2;

    obj1.inData(30);
    obj2.inData(20);

    exchange(obj1, obj2);

    cout<<"The value of obj1 after exchanging becomes: ";
    obj1.display();
    cout<<"The value of obj2 after exchanging becomes: ";
    obj2.display();
    return 0;
}