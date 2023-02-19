#include <iostream>
using namespace std;
float funcAverage(float a, float b){
    float avg = (a+b)/2.0;
    return avg;
}
float funcAverage2(int a, float b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    cout<<"we are under this function"<<endl;
    float avg = (a+b)/2.0;
    return avg;
}
// swaping two numbers
template <class T>
void swapp( T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    float a;
    a = funcAverage(5, 5);
    printf("The average of these numbers is %.3f\n", a);
    int x = 5, y = 4;
    swapp(x, y);
    cout<<x<<endl<<y;
    return 0;
}
