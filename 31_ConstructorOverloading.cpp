#include<iostream> 
// Constructor overloading
using namespace std; 
class complex{
    int a, b;
    public:
    complex(){
        a= 0;
        b= 0;
    }
    // complex(int x){
    //     a = x;
    //     b = 0;
    // }
    complex(int x, int y=0){    // Constructor with default arguments
        a = x;
        b = y;
    }
    void printNumber(){
        cout<<"The value of complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    complex c1;
    c1.printNumber();

    complex c2(23);
    c2.printNumber();

    complex c3(1, 23);
    c3.printNumber();

    return 0;
}