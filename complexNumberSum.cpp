#include <iostream>
#include <string>
using namespace std;

// forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumImagComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    friend int Calculator ::sumImagComplex(Complex o1, Complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator :: sumImagComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.setNumber(1, 4);
    c2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(c1, c2);
    cout << "The sum of real part of c1 and c2 is: " << res << endl;

    int resc = calc.sumImagComplex(c1, c2);
    cout << "The sum of imaginary part of c1 and c2 is: " << resc <<"i"<< endl;
    return 0;
}