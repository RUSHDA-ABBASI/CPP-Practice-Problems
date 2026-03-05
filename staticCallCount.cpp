//Write a function int callCounter() that returns how many times it has been called so far.
//Hint: Use a static local variable in the function.
#include <iostream>
using namespace std;

int callCounter() {
    static int count = 0;
    count++;
    return count;
}

int main() {
    cout << callCounter() << endl; // 1
    cout << callCounter() << endl; // 2
    cout << callCounter() << endl; // 3
}
