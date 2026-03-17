//Write a class Maths with a static method int gcd(int a, int b) that returns the greatest common divisor of two
//numbers. Call this function without creating an object.
#include <iostream>
using namespace std;

class Maths {
public:
    static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main() {
    int result = Maths::gcd(48, 18);
    cout << "GCD is: " << result << endl;   // Output: 6
    return 0;
}
