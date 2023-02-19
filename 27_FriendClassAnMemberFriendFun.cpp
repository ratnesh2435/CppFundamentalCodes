#include <iostream>

using namespace std;

// Forward declaration
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};
class complex
{
    int a, b;
    // Individually declaring functions as friends
    
    // friend int calculator ::sumRealComplex(complex o1, complex o2);
    // friend int calculator ::sumCompComplex(complex o1, complex o2);

    // Aliter: Declaring the entire calculator class as friend
    friend class calculator;

public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }

    void printNumber()
    {
        cout << "The sum of above two complex number is : " << a << "+" << b << "i" << endl;
    }
};

int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}


int main()
{
    complex c1, c2, c3;
    c1.setNumber(12, 12);
    c2.setNumber(1, 12);

    calculator calc;
    int real = calc.sumRealComplex(c1, c2);
    cout << "The sum of real part of complex number is : " << real << endl;
    int comp = calc.sumCompComplex(c1, c2);
    cout << "The sum of real part of complex number is : " << comp << endl;
    //cout << "The sum of above two complex number is : " << real << "+" << comp << "i" << endl;

    return 0;
}
