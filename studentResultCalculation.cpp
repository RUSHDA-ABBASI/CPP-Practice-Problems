#include <iostream>
using namespace std;
/*
Write a program that take input of your roll number along with the marks obtained in five
subjects and display the total marks obtained and the percentage.
*/
int main() {
    int rollno;
    float marks[5];

    cout << "Enter your Roll number: ";
    cin >> rollno;

    cout << "Enter the marks you obtained in 5 subjects (0 - 100):\n";

    for (int i = 0; i < 5; i++) {
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks entered.\n";
            return 0;
        }
    }

    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }

    float percentage = (sum / 500) * 100;

    cout << "Total marks obtained are: " << sum << endl;
    cout << "Percentage is: " << percentage << "%";

    return 0;
}
