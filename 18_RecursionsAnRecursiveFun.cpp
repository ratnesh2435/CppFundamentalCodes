#include<iostream> 

using namespace std; 


int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int fib(int n){
    if ( n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
//          ----------- Actual Answer came with this ------------
// int fib(int n)
// {
//     if (n<=1){
//         return 0;
//     }
//     else if (n==2){
//         return 1;
//     }
//     return fib(n-1) + fib (n-2);
// }
int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    // cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}