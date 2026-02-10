#include <iostream>
#include <cstring> // for strlen, strcpy
using namespace std;
/*
Task:
Create a Student class that:
Stores name as char* (allocated with new[])
Has:
Parameterized constructor (const char*)
Copy constructor (deep copy!)
Destructor (delete[] name)
void print()
Test:
Student s1("Ali");
Student s2 = s1; // Must not crash!
s1.print(); s2.print();
?? Goal: Avoid shallow copy bug with C-style strings.
*/

class Student {
private:
    char* name;

public:
    // Parameterized constructor
    Student(const char* n) {
        if (n != nullptr) {
            name = new char[strlen(n) + 1]; 
            strcpy(name, n);
        } else {
            name = new char[8];
            strcpy(name, "Unknown");
        }
    }

    // Copy constructor ? DEEP COPY
    Student(Student &other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        cout << "Deep copy of Student: " << name << "\n";
    }

    // Destructor
    ~Student() {
        delete[] name;
    }

    void print() {
        cout << "Name: " << name << "\n";
    }
};

// Test
int main() {
    Student s1("Ali");
    Student s2 = s1;  // Triggers copy constructor

    s1.print(); // Name: Ali
    s2.print(); // Name: Ali

    return 0;
}