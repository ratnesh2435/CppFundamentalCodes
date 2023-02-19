#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function Objects (functors): Function wrapped in a class so that it available like an object
    int arr[] = {27,21,6,1,9,2};
    // sort(arr, arr+5);
    sort(arr, arr+6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}