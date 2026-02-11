//Write a C++ program that stores numbers in an array and uses a pointer to const to iterate and print all values.
//The pointer should not modify the values it points to.
//Hint: pointer to const usage (const int *p).
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Pointer to const int
    const int *p = arr;

    // Iterate through the array using the pointer
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
        
        // *(p + i) = 100;  // ? Not allowed (compile-time error)
    }

    return 0;
}
