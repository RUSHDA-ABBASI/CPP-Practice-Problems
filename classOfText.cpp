#include <iostream>
#include <cstring>
//the compiler made shallow copy, so both objects point to the same location. 
//hence destructor runs twice and the program crashes.
using namespace std;

class Text {
    char* buffer;
public:
    Text(const char* s) {
        buffer = new char[strlen(s) + 1];
        strcpy(buffer, s);
    }
    Text(const Text& other) {
        buffer = new char[strlen(other.buffer) + 1];
        strcpy(buffer, other.buffer);
    }
    void print() { cout << buffer << endl; }
    ~Text() {
        delete[] buffer;
    }
};
int main() {
    Text t1("Hello");
    Text t2 = t1; // now safe
    t2.print();
    return 0;
}
