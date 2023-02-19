#include <iostream>

using namespace std;

class Employee
{
    int Id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> Id;
    }

    void getId()
    {
        cout << "The Id of this employee is " << Id << endl;
    }
};

int main()
{
    // Employee ratnesh, harry, sakshi, rohan;
    // ratnesh.setId();
    // ratnesh.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}