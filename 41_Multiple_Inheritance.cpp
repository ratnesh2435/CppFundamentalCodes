#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance
// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//     Class body of class "DerivedC"
// };

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of these number is " << base1int << endl;
        cout << "The value of these number is " << base2int << endl;
        cout << "The sum of value of these numbers are " << base1int + base2int << endl;
    }
};

// The inherited derived class will look somthing like this:
// Data members:
//     base1int --> protected
//     base2int --> protected
// Members functions:
//     set_base1int() --> public
//     set_base2int() --> public
//     show() --> public

int main()
{
    Derived ratnesh;
    ratnesh.set_base1int(24);
    ratnesh.set_base2int(3);
    ratnesh.show();
    return 0;
}