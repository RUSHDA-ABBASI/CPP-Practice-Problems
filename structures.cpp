#include<iostream>
using namespace std;
struct Employee {
    int empId;
    string name;
    float salary;
};
int main(){
    struct Employee E1;
    E1.empId = 01;
    E1.name = "rushda";
    E1.salary = 10000;

    cout<< E1.empId << endl;    
    cout<< E1.name<< endl;    
    cout<< E1.salary << endl;    

    return 0;
}