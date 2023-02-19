# include<iostream>

using namespace std;
int glo = 6;        // Global variable
void sum(){
    int a;
    cout<< glo;
}
int main(){
    int glo = 9;        //Local variable gets more imp as compare to global variable^^^^^^
    glo = 78;   // don't write int glo = 78; bcoz glo already declared
    // int a = 4;
    // int b = 5;
    int a=14, b=15;
    float pi=3.14;
    bool is_true = true;    //Try with false;
    sum();
    cout<<glo<< is_true;
    char c='c'; //Don't write more than one charater at a time  and  double inverted commas
    // cout<<"This is tutorial 4. \n  Here the value of a is "<<a<<". The value of b is "<<b;
    // cout<<"\n This value of pi is: "<<pi;
    // cout<<"\n This value of pi is: "<<c;

    return 0;
}