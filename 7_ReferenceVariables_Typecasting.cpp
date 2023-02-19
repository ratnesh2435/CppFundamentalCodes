#include<iostream>

using namespace std;
 int c = 1;
int main(){
    // //********************BUILD IN DATA TYPES**************
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is:"<<c<<endl;
    // cout<<"\n The global c is: "<<::c<<endl;
    // // ********************FLOAT, DOUBLE AND LONG DOUBLE LITERALES**************
    // float d = 34.4f;    
    // long double e = 34.4l;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4L)<<endl;
    // cout<<"the value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    
    // //********************Reference Variables**************
    // // // Rohan Das ---> Monty --> Rohu --> Dangerous Coder;
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //********************TypeCasting**************
    int a = 45;
    float b = 45.3456;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<(int)b<<endl;

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;


    return 0;
}