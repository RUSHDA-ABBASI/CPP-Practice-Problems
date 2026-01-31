#include<iostream>
using namespace std;

int main(){
    int a = 7;
    int* b; //pointer
    b = &a;
    int** c = &b;

    cout<<"Address of b is: "<<&b<<endl; 
    cout<<"Adress of a is: "<<b<<endl;  
    cout<<"Value at a is: "<<*b<<endl; 
    cout<<"Address of c is: "<<&c<<endl;
    cout<<"Address at c is(address of b): "<<c<<endl;
    cout<<"Dereferencing of pointer c gives: "<<**c;

    return 0;
}