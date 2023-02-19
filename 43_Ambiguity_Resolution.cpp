#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 ::greet();
    };
};

class base
{
public:
    void say()
    {
        cout << "The under base part in inheritance" << endl;
    }
};

class derive : public base
{
    int a;
// D's new say() method will override base class's say() method
public:
    // void say()
    // {
    //     cout << "The under derive part due to inheritance" << endl;
    // }
};

int main()
{ // Ambiguity 1
    Base1 c1;
    c1.greet();
    Base2 c2;
    c2.greet();
    Derived call;
    call.greet();

    // Ambiguity 2
    derive s;
    s.say();
    return 0;
}