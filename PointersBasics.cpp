#include<iostream>
using namespace std;

int main(){
    int a = 7;
    int* b; //pointer
    b = &a;
    cout<<"Address of b is: "<<&b<<endl; //address of pointer.
    cout<<"Adress of a is: "<<b<<endl;  //address of operator.
    cout<<"Value at a is: "<<*b<<endl;  //dereferencing (accessing value of the address to which pointer is pointing.)

    return 0;
}