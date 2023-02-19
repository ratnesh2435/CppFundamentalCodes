#include <iostream>
#include <cmath>
using namespace std;
/*
Crate 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / an displays the result using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your 
    choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented? 
*/
class SimpleCalculator
{
    float a, b;

public:
    void setDataSimpleCalc()
    {
        cout << "Enter the value of a is: " << endl;
        cin >> a;
        cout << "Enter the value of b is: " << endl;
        cin >> b;
    }
    void getDataSimpleCalc()
    {
        cout << "The value of (a + b) number is " << (a + b) << endl;
        cout << "The value of (a - b) number is " << (a - b) << endl;
        cout << "The value of (a * b) number is " << (a * b) << endl;
        cout << "The value of (a / b) number is " << (a / b) << endl;
    }
};

class ScientificCalculator
{
    float a, b;

public:
    // void setDataScientificCalc(){
    //     cout<<"Enter the value of a is: "<<endl;
    //     cin>>a;
    //     cout<<"Enter the value of b is: "<<endl;
    //     cin>>b;
    // }
    void getDataScientificCalc()
    {
        cout << "The value of sin(a) number is " << sin(a) << endl;
        cout << "The value of cos(a) number is " << cos(a) << endl;
        cout << "The value of tan(a) number is " << tan(a) << endl;
        cout << "The value of log(a) number is " << log(a) << endl;
        cout << "The value of sin(b) number is " << sin(b) << endl;
        cout << "The value of cos(b) number is " << cos(b) << endl;
        cout << "The value of tan(b) number is " << tan(b) << endl;
        cout << "The value of log(b) number is " << log(b) << endl;
    };
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
protected:
    float a, b;

public:
    void display()
    {
        setDataSimpleCalc();
        getDataSimpleCalc();
        // setDataScientificCalc();
        getDataScientificCalc();
    }
};
int main()
{
    HybridCalculator values;
    values.display();
    return 0;
}