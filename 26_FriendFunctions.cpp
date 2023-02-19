#include <iostream>

using namespace std;
class complex
{
    int a, b;

public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    // Below line means that non member - sumComplex function is allowed to do anything with my private parts(member)
    friend complex sumComplex(complex m, complex n);

    void printNumber()
    {
        cout << "The sum of above two complex number is : " << a << "+" << b << "i" << endl;
    }
};

complex sumComplex(complex m, complex n)
{
    complex l;
    l.setNumber((m.a + n.a), (m.b + n.b));
    return l;
}
int main()
{
    complex c1, c2, c3;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    c3 = sumComplex(c1, c2);
    c3.printNumber();

    return 0;
}
/*  Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of thee class, it cannot be called from the object of that class. c1.sumComplex() == invalid syntax
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need objects_name.member_name to access any member.
*/