// #include<iostream>

// using namespace std;
// class y;
// class x
// {
//     int a;
//     public:
//     void setValue(int value){
//         a = value;
//     }
//     friend void add(x, y);
// };

// class y
// {
//     int b;
//     public:
//     void setValue(int num){
//         b = num;
//     }
//     friend void add(x, y);

// };

// void add(x o1, y o2)
// {
//     cout<<"summing data of x and y objects gives me "<<o1.a + o2.b<<endl;
// }
// int main(){
//     x a1;
//     a1.setValue(122);
//     y a2;
//     a2.setValue(34);
//     add(a1, a2);
//     return 0;
// }

#include <iostream>

using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &x, c2 &y);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &x, c2 &y);

public:
    void indata(int b)
    {
        val2 = b;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
// Trick of swaping the numbers is
// int tmp = a;
// a = b;
// b = tmp;
void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
};

int main()
{
    c1 oc1;
    c2 oc2;
    oc1.indata(34);
    oc2.indata(66);
    exchange(oc1, oc2);
    cout << "After swaping number is: ";
    oc1.display();
    cout << "After swaping number is: ";
    oc2.display();
    return 0;
}