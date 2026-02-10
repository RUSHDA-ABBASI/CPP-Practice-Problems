#include<iostream>
using namespace std;

class BadArray {
private:
    int* data;
    int size;

public:
    BadArray(int s) {
        size = s;
        data = new int[size];  // Dynamic array
        for(int i=0; i<size; i++) data[i] = i;
    }

    // ? No custom copy constructor ? C++ makes shallow copy!
    
    void print() {
        for(int i=0; i<size; i++) cout << data[i] << " ";
        cout << "\n";
    }
};

int main() {
    BadArray a1(3);
    BadArray a2 = a1;  // Shallow copy! Both point to SAME memory
    a1.print(); // 0 1 2
    a2.print(); // 0 1 2 ? seems fine...

    // But when a2 is destroyed, 'data' is deleted.
    // Then a1 tries to use freed memory ? CRASH or garbage!
}
