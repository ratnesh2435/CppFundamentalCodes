#include <iostream>

using namespace std;
class complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created

    complex(void);  // Constructor Declaration

    void printNumber()
    {
        cout << "The sum of above two complex number is : " << a << "+" << b << "i" << endl;
    }
};

complex ::complex(void) // --> This is a default constructor as it accepts no parameter
{
    a = 12;
    b = 21;
}
int main()
{
    complex c1, c2;
    c1.printNumber();

    return 0;
}
/*
characteristics of constructor
1. It should be declared in the public section of class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types 
4. It can have default arguments
5. We cannot refer to their address
*/


