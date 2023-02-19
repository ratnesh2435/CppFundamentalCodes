#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
// void display(vector<int> &v){
    cout<<"Displaying this vector"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    // Ways to create a vector
    vector<int> vec1;   // Zero length integer vector

    // int element, size,a;
    // cout<<"Enter the size of element: "<<endl;
    // cin>>size;
    // for(int i = 0; i< size; i++){
    //     cout<<"Enter an element to add this vector: "<<endl;
    //     cin>>element;
    //     vec1.push_back(element);

    // }
    // display(vec1);
    // vector<int>:: iterator iter = vec1.begin();
    // // vec1.pop_back();
    // // vec1.insert(iter,5, 566);
    // vec1.insert(iter+1,5,566);
    // display(vec1);

    vector<char> vec2(4);    // 4-element character vector
    vec2.push_back('12');
    display(vec2);
    vector<char> vec3(vec2);    // 4-element character vector
    display(vec3);
    vector<int> vec4(6, 13);    // 6-element vector of 13s
    display(vec4);
    cout<<vec2.size()<<endl;
    cout<<vec4.size()<<endl;
    return 0;
}
