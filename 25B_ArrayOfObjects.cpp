#include<iostream> 

using namespace std; 
class complex
{
    int a, b;
    public:
        void setData( int v1, int v2)
        {
            a = v1;
            b = v2;
            // cout<<"Enter the values of a and b: "<<endl; // Try with this too This part is created by me:)
            // cin>>a;
            // cin>>b;
        }
        void setDataBySum(complex l1, complex l2)
        {
            a = l1.a + l2.a;
            b = l1.b + l2.b;
            cout<<"The sum of above two complex number is : "<<a<<"+"<<b<<"i"<<endl;
        }
        void printNumber()
        {
            cout<<"The complex number is : "<<a<<"+"<<b<<"i"<<endl;
        }
};
int main(){
    complex c1, c2, c3;

    c1.setData(23, 12);
    c1.printNumber();

    c2.setData(45, 87);
    c2.printNumber();
    
    c3.setDataBySum(c1, c2);
    // c3.printNumber();

    return 0;
}