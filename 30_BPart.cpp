// Create a function (Hint: Make it a friend function ) which takes 2 point 
// objects and computes the distance between those 2 points
#include<iostream> 
#include<cmath>
#include<iomanip>
using namespace std; 
class point
{
    int x, y;

    public:
    point(int a, int b){
        x = a;
        y = b;
    }
    void squrt(point a1, point b1){
        x = (a1.x - b1.x)*(a1.x - b1.x);
        y = (a1.y - b1.y)*(a1.y - b1.y);
        cout<<"The distance between two points is : "<<sqrt(x+y)<<endl;
        // cout<<"The distance between two points is : "<<fixed<<setprecision(10)<<sqrt(x+y)<<endl;
    }
    void displayPoint(){
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
    }
};

int main(){
    point a(0, 6);
    a.displayPoint();

    point b(8, 0);
    b.displayPoint();

    point c(0,0);
    // c.displayPoint();

    c.squrt(a, b);
    // c.displayPoint();

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------

// #include<iostream> 
// #include<cmath>
// #include<iomanip>
// using namespace std; 
// class point
// {
//     int x, y;
//     friend void squrt(point a1, point b1);
//     public:
//     point(int a, int b){
//         x = a;
//         y = b;
//     }
    
//     void displayPoint(){
//         cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
//     }
// };
// void squrt(point a1, point b1){
//        int x = (a1.x - b1.x)*(a1.x - b1.x);
//       int y = (a1.y - b1.y)*(a1.y - b1.y);
//         cout<<"The distance between two points is : "<<sqrt(x+y)<<endl;
//         // cout<<"The distance between two points is : "<<fixed<<setprecision(10)<<sqrt(x+y)<<endl;
//     }
// int main(){
//     point a(0, 6);
//     a.displayPoint();

//     point b(8, 0);
//     b.displayPoint();

//     point c(0,0);
//     // c.displayPoint();

//     squrt(a, b);
//     // c.displayPoint();

//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------------------

// #include<iostream> 
// #include<cmath>
// #include<iomanip>
// using namespace std; 
// class point
// {
//     int x, y;
//     friend double distance(point a1, point b1);
//     public:
//     point(int a, int b){
//         x = a;
//         y = b;
//     }
    
//     void displayPoint(){
//         cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
//     }
// };
// double distance(point a1, point b1){
//     //    int x = (a1.x - b1.x)*(a1.x - b1.x);
//     //   int y = (a1.y - b1.y)*(a1.y - b1.y);
//     double  res = sqrt(pow(a1.x - b1.x, 2) + pow(a1.y - b1.y, 2));
//     return res;
//         // cout<<"The distance between two points is : "<<sqrt(x+y)<<endl;
//         // cout<<"The distance between two points is : "<<fixed<<setprecision(10)<<sqrt(x+y)<<endl;
//     };
// int main(){
//     point a(0, 6);
//     a.displayPoint();

//     point b(8, 0);
//     b.displayPoint();

//     point c(0,0);
//     // c.displayPoint();

//     double result = distance(a, b);
//     cout<<result<<endl;
//     // c.displayPoint();

//     return 0;
// }