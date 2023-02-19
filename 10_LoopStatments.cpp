#include<iostream>

using namespace std;

int main(){
    /*Loops in C++:
    There are three types of loops in c++:
    1.For loop
    2.While loop
    3. Do-while loop*/

    // For loop in c++
    // int i=1;
    // cout<<i;
    // i++;
   
    //Syntax for for loop
    // for(initializtion; condition; updation)
    // {
    //     loop body(c++ code):
    // }

    // for (int i = 0; i <= 100; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    //Syntax for While loop
    // syntax:
    // while(condition)
    // {
    //     c++ statement;
    // }

    //Printing 1 to 20 using while loop
    // int i = 1;
    // while(i<=20){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Syntax for While loop
    // syntax:
    // do
    // {
    //     c++ statement;
    // }while(condition);

    //  int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=10);


 int i = 1;
    do{
        cout<<i <<" x "<<6 <<" = "<<i*6<<endl;
        i++;
    }while(i<=10);

    return 0;
}