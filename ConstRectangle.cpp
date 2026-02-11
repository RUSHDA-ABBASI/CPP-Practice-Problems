//Create a class Rectangle with width and height data members.
//Implement a getArea() function marked as const so it can be called on a const object and doesn’t modify the
//object.
//Hint: Use const member function to return computed value.
#include <iostream>
using namespace std;

class Rectangle {
    double width;
    double height;

public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    // const member function
    double getArea() const {
        return width * height;   // does not modify data members
    }
};

int main() {
    const Rectangle r(5.0, 4.0);   // const object
    cout << "Area: " << r.getArea() << endl;

    return 0;
}
