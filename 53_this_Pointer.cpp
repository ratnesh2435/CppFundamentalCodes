#include<iostream>
using namespace std;
class A{
    int a;
    public:
        // void setData(int a){
        //     this->a = a;
        // }
        A & setData(int a){
            this->a = a;
            return *this;
        }
        void getData(void){
            cout<<"The value of a is "<<a<<endl;
        }
};
// this is a keyword which is a pointer which points to the object which invokes the member function.
int main(){
    A a;
    // a.setData(24);
    // a.getData();
    a.setData(24).getData();
    return 0;
}