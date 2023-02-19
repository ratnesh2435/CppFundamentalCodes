#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 4;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is: "<<a<<endl;
    // Constants in C++
    // const int a = 4;
    // cout<<"The value of a was: "<<a<<endl;
    // // a = 45;   You will get an error because a is a constant
    // cout<<"The value of a is: "<<a<<endl;

    //Manipulators in c++
    // int a = 3, b = 78, c = 1123;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    

    //operator precedence
    int a = 3, b = 5;
    //int c = (a*6)+b;
    int c = ((((a*6)+b)-45)+87);
    c = a*6+b-45+87;
    cout<<c;
    return 0;
}