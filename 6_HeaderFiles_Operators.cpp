//There are two types of header files:
// 1. System header files: It comes with the compiler 
#include<iostream>
// 2. User defined header files; It is written by the 
// programmer
//#include "this.h" //--> This will produce an error if this.h is no present 
// in the currentdirectory                *******cppreference.com*********

using namespace std;

int main(){
    int a = 4, b = 5;

    //cout<<"This is hello world program";
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    //Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++  is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    //Assignment Operators --> used to assign values to variables
    // int a = 3, b = 9;
    // char d = 'd';

    //Comparison Operator
    cout<<"Following are the comparison operators in c++"<<endl;
    cout<<"The value of a == b is"<<(a==b)<<endl;
    cout<<"The value of a != b is"<<(a!=b)<<endl;
    cout<<"The value of a >= b is"<<(a>=b)<<endl;
    cout<<"The value of a <= b is"<<(a<=b)<<endl;
    cout<<"The value of a < b is"<<(a<b)<<endl;
    cout<<"The value of a > b is"<<(a>b)<<endl;

    //Logical Operators
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of this logical and operator is ((a==b) && (a<b)) is "<<((a==b) && (a<b))
    <<endl;
    cout<<"The value of this logical or operator is ((a==b) || (a<b)) is "<<((a==b) || (a<b))
    <<endl;
    cout<<"The value of this logical not operator is (!(a==b)) is "<<(!(a==b))
    <<endl;

    return 0;

}