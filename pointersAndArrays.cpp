#include<iostream>
using namespace std;

int main(){
    int marks[5] = {10, 20, 30, 40, 50};

    int *p  = marks;
    
    cout<<"Value of marks[0] is: "<<*p << endl;
    cout<<"Value of marks[1] is: "<<*(p+1) << endl;
    cout<<"Value of marks[2] is: "<<*(p+2) << endl;
    cout<<"Value of marks[3] is: "<<*(p+3) << endl;
    cout<<"Value of marks[4] is: "<<*(p+4) << endl;

    return 0;
}