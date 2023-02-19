#include<iostream> 

using namespace std; 

// struct employee
typedef struct employee
{ 
    int eId;    //4 bytes
    char favChar;   //1 bytes
    float salary;   //4 bytes
}ep;

union money
{
    int rice;   //4 bytes
    char car;   //1 bytes
    float pounds;   //4 bytes
};

int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1;
    // cout<<(m1 == 2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;


    // union money m1;
    // m1.rice = 34;
    // // m1.car = 'c';    //try with this you will get garbage value bcoz in union ur memory gets shared..so u can used only one data otherwise it will overrites it as you can see!
    // cout<<m1.rice;


    // // struct employee ratnesh;
    // // struct employee harry;
    // // struct employee ajay;
    // ep ratnesh;
    // ep harry;
    // ep ajay;
    // ratnesh.eId = 01;
    // ratnesh.favChar = 'v';
    // ratnesh.salary = 1234567890;
    // cout<<"The info. about emplyee is "<<ratnesh.eId<<endl;
    // cout<<"The info. about emplyee is "<<ratnesh.favChar<<endl;
    // cout<<"The info. about emplyee is "<<ratnesh.salary<<endl;

    return 0;
}