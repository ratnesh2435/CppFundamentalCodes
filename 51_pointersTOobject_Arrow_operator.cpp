#include<iostream>
using namespace std;
class complex{
    	int real, imaginary;
        public:
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
        void getData(void){
            cout<<"The value of "<<endl
            <<"Real part: "<<real<<endl
            <<"Imaginary part: "<<imaginary<<endl;
        }
};
int main(){
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    // c1.setData(12, 23);
    // c1.getData();
    // This are exactly same :
    (*ptr).setData(12, 23);
    (*ptr).getData();
    ptr->setData(12, 23);   // Called Arrow operator!
    ptr->getData();

    // Array of Objects
    complex *pt = new complex[4];
    pt->setData(1, 2);
    pt->getData();


    return 0;
}