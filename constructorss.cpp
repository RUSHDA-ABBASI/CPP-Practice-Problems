#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Default constructor
    Person() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called.\n";
    }

    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called for " << name << ".\n";
    }

    void display() {
        cout << name << ", " << age << " years old\n";
    }
};

int main() {
    Person p1;              // Calls default
    Person p2("Ali", 20);   // Calls parameterized
    p1.display();
    p2.display();
}