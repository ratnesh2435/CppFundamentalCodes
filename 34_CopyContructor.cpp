#include <iostream>

using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0; //  It's a default constructor
    }

    Number(int num)
    {
        a = num; //  It's a parameterized constructor
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl; //  It's a copy constructor
        a = obj.a;
    }
    void display()
    {
        cout << "The value is: " << a << endl;
    }
};
int main()
{
    Number x, y, z(24), c;

    x.display();
    z.display();
    Number c1(z); //  Copy constructor invoked
    c1.display();//c1 should exactly resemble z or x or y
    c = z;// Copy constructor not called
    Number c2 = x;
    c2.display();
    return 0;
}