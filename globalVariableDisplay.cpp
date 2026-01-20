#include<iostream>
using namespace std;

int c = 45; //global variable.

int main(){
    int a,b,c;
    cout<<"enter 1st number: ";
    cin>>a;
    cout<<"enter 2nd variable: ";
    cin>>b;

    c = a+b;
    cout<<"a+b = c is: "<<c<<endl;
    cout<<"Gloabal variable c is: "<<::c<<endl;
    return 0;
}