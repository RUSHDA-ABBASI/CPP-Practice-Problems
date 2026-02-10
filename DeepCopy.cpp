#include<iostream>
using namespace std;
class GoodArray {
private:
    int* data;
    int size;

public:
    GoodArray(int s) {
        size = s;
        data = new int[size];
        for(int i=0; i<size; i++) data[i] = i;
    }
    // ? CUSTOM COPY CONSTRUCTOR ? DEEP COPY
    GoodArray(const GoodArray &other) {
        size = other.size;
        data = new int[size];          // NEW memory!
        for(int i=0; i<size; i++)
            data[i] = other.data[i];   // Copy VALUES
        cout << "Deep copy made!\n";
    }

    void print() {
        for(int i=0; i<size; i++) cout << data[i] << " ";
        cout << "\n";
    }

    ~GoodArray() { delete[] data; } // Destructor
};

int main() {
    GoodArray a1(3);
    GoodArray a2 = a1; 
    a1.print(); // 0 1 2
    a2.print(); // 0 1 2
} // Both clean up their own memory ? no crash!

