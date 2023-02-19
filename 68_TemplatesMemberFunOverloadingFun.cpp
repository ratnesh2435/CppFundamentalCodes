#include<iostream>
using namespace std;
template <class T>
class Ratnesh{
    public:
    T data;
    Ratnesh(T a):data(a){}
    void display();
};

template <class T>
void Ratnesh<T>:: display(){
    cout<<data<<endl;
}

template <class T>
void func(T a){
    cout<<"I am first func() "<<a<<endl;
}
template <class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
int main(){
    // Ratnesh<float> obj(3.5);
    // cout<<obj.data<<endl;
    // obj.display();

    // func(5); // Exact match takes the highest priority
    func1(5);
    
    return 0;
}