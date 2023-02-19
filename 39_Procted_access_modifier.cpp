#include <iostream>

using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};
/*
                Public Derivation       Private Derivation      Protected Derivation
1. Private      Not Inherited           Not Inherited           Not Inherited
2. Protected    Protected               Private                 Protected
3. Public       Public                  Private                 Protected

*/
class Derived : protected Base
{
};
int main()
{
    Base b;
    Derived d;
    // cout<<b.a;// Will not work since a is protected in both base as well as derived class

    return 0;
}