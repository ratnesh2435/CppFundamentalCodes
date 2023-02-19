#include<iostream> 

using namespace std; 
class simple
{
    int data1;
    int data2;
    int data3;
    public:
    // Constructor with default arguments
    simple(int a = 1, int b = 2, int c = 3){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};
void simple ::printData(){
    cout<<"The values of data 1,2,3 is: "<<data1<<","<<data2<<","<<data3<<" respectively!!!"<<endl;
}
int main(){
    simple x(3);
    x.printData();
    simple y(3,12,23);
    y.printData();
    simple l(12, 12);
    l.printData();
    return 0;
}