//Create a class Student with:
//-private: rollNo
//-constructor to initialize roll number
//-function getRoll() that returns roll number
//Now create a const object of Student and print its roll number.
//-getRoll() must be const function
//-Object must be const
//-Program should compile and print roll number
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;

public:
    // Constructor to initialize roll number
    Student(int r) {
        rollNo = r;
    }

    // const member function
    int getRoll() const {
        return rollNo;
    }
};

int main() {
    // const object of Student
    const Student s1(101);

    // Calling const function on const object
    cout << "Roll Number: " << s1.getRoll();

    return 0;
}
