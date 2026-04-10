#include<iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 1;

    cout<<"Before swapping: a = " << a <<" and b = " << b <<endl;

    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping: a = "<< a << " and b = "<< b << endl;
    return 0;
}