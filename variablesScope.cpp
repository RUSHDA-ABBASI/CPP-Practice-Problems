#include<iostream>
using namespace std;

int a = 10;
void print(){
    cout<<a;
}

int main(){
    int a = 15;
    a = 20; //updating a to see if local variable is updated or the global one
    print();
    cout<<"\n" <<a;
    return 0;

// this shows that when global and local variables have the same name, the precedence is given to the local variabele.
}