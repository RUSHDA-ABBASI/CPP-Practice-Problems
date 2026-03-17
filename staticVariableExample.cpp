#include<iostream>
using namespace std;
/*
Create a class that assigns a unique ID to each object using a static data member.
Design a class Employee where each new object gets a unique ID starting from 1. Use a static variable to track
how many employees were created so far and assign new IDs accordingly.
*/
class Employee {
private:
    int employeeId;              // unique ID for each employee
    string name;

public:
    static int totalEmployees;    // shared counter

    // Constructor
    Employee(string n) {
        name = n;
        totalEmployees++;         // increment shared counter
        employeeId = totalEmployees;  // assign unique ID
    }

    void display() const {
        cout << "Employee ID: " << employeeId << ", Name: " << name << endl;
    }
};
// Definition of static data member
int Employee::totalEmployees = 0;

int main() {
    Employee e1("Ali");
    Employee e2("Sara");
    Employee e3("Ahmed");

    e1.display();
    e2.display();
    e3.display();

    return 0;
}
