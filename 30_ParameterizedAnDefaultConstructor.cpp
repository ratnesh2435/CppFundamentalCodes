#include <iostream>

using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y); //constructor declaration
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y)  //--> This is a parameterized constructor as it takes 2 parameter.
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    complex a(3, 2);
    a.printNumber();
    //  Explicit call
    complex b = complex(12, 21);
    b.printNumber();

    return 0;
}