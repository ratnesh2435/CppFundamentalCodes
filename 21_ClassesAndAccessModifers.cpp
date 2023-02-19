#include<iostream> 

using namespace std; 

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1);  // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

// class Animal
// {
//     private:
//         char a, b, c;
//     public:
//         char d, e, f;
//         void setData( char a2, char b2, char c2);
//         void getData(){
//             cout<<"This is my private animal: "<<a<<endl;
//             cout<<"This is my private animal: "<<b<<endl;
//             cout<<"This is my private animal: "<<c<<endl;
//             cout<<"The value of d is "<<d<<endl;
//             cout<<"The value of e is "<<e<<endl;
//             cout<<"The value of f is "<<f<<endl;
//         }
// };

// void Animal :: setData(char a2, char b2, char c2){
//     a = a2;
//     b = b2;
//     c = c2;
// }

int main(){
    Employee ratnesh;
    // ratnesh.a = 134;     //--> This will throw error as a is private
    ratnesh.d = 234;
    ratnesh.e = 45;
    ratnesh.setData(1,3,4);
    ratnesh.getData();

    // Animal ratnesh;
    // ratnesh.d = 'a';
    // ratnesh.e = 'b';
    // ratnesh.f = 'c';
    // ratnesh.setData('d', 't', 's');
    // ratnesh.getData();
    return 0;
}