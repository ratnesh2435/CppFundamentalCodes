#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 5;
    int *ptr = &a;
    // *ptr = 999;
    cout << "The value of a is " << *(ptr) << endl;

    // new (Operator)keyword
    // int *p = new int(40);
    float *p = new float(40.24);
    cout << "The value at at the address of p is " << *(p) << endl;

    int *arr = new int[3];
    // arr[0] = 10;
    // arr[1] = 11;
    // arr[2] = 12;
    *(arr) = 10;
    *(arr + 1) = 11;
    *(arr + 2) = 12;

    // delete arr;
    // delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // delete (Operator)keyword
    return 0;
}