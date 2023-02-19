#include<iostream>
#include<string>
using namespace std;
/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS
template<class T1, class T2, ... (COMMA SEPARATED)>
class nameOfClass{
    //body of class
};
*/
template<class T1, class T2, class T3>
class myClass{
    public:
    T1 data1;
    T2 data2;
    T3 name;
    myClass( T1 a, T2 b):data1(a), data2(b){}
    void display(){
        cout<<this->data1<<endl
        <<this->data2<<endl;
        cin>>name;
        cout<<name<<": "<<data1 + data2<<endl;
    }
};
int main(){
    myClass <int, float, string>obj(2, 4.4);
    obj.display();
    return 0;
}