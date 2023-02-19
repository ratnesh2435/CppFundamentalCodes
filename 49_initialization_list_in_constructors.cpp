#include <iostream>
using namespace std;
// Syntax for initialization list in constructor:
// constructor (argument-list) : initilization - section
// {
//     assignment + other code;
// }
class Test
{
    int a;
    int b;

public:
    Test(int x, int y) : a(x), b(y)
    // Test(int x, int y) : a(x), b(y + x)
    // Test(int x, int y) : a(x), b(y + a)
    // Test(int x, int y) : a(x + b), b(y)  // RED flag this will create problems because a will be declared first and initialized first.
    {
        cout << "Constructor executed" << endl
             << "The value of a is: " <<a<< endl
             << "The value of b is: " <<b<< endl;
    }
};
int main()
{
    Test t(3, 5);
    return 0;
}