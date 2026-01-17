#include<iostream>
using namespace std;

int main(){
    float num1,num2;
    cout<<"Enter 1st number: "<<endl;  //'<<' is insertion operator.
    cin>>num1;                         //'>>' is extraction operator.
    cout<<"Enter 2nd number: "<<endl;
    cin>>num2;

    float sum;
    sum = num1+num2;

    cout<<"Sum is: "<<sum<<endl;
    return 0;
}