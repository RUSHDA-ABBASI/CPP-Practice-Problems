#include <iostream>
#include <cstring>
using namespace std;

class UniqueString {
    char* data;
	public:
    UniqueString(const char* s) {
        data = new char[strlen(s) + 1];
        strcpy(data, s);
    }

    // Deep copy constructor
    UniqueString(const UniqueString& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    void set(const char* s) {   // mutation allowed
        delete[] data;
        data = new char[strlen(s) + 1];
        strcpy(data, s);
    }

    void print() const {
        cout << data << endl;
    }

    ~UniqueString() {
        delete[] data;
    }
};

class SharedString {
    const char* data; 
	public:
    SharedString(const char* s) : data(s) {}

    SharedString(const SharedString& other) {
        data = other.data;
    }
    void print() const {
        cout << data << endl;
    }
};

int main() {
    // Deep copy behavior
    UniqueString u1("test");
    UniqueString u2 = u1;
    u2.set("new");

    u1.print(); // test
    u2.print(); // new

    // Shallow copy behavior
    SharedString s1("hello");
    SharedString s2 = s1;

    s1.print(); // hello
    s2.print(); // hello
    return 0;
}
