#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lis){
    list<int> :: iterator iter;
    cout<<"Elements present in the list: ";
    for (iter = lis.begin(); iter != lis.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
    
}
int main(){
    list<int> list1;
    list1.push_back(9);
    list1.push_back(9);
    list1.push_back(49);
    list1.push_back(39);
    list1.push_back(95);
    list1.push_back(95);
    list1.push_back(19);
    list1.push_back(2);
    display(list1);
    // list1.remove(9);
    // list1.pop_back();
    // list1.pop_front();
    list1.reverse();
    display(list1);
    cout<<"size is : " <<list1.size()<<endl;

    list<int> li(3);
    list<int> :: iterator iter;
    // cout<<"Enter the element to insert: ";
    // cin>>*iter;
    // for(iter = li.begin(); iter != li.end(); iter++){
    //     cout<<*iter<<" ";
    // }
    iter = li.begin();
    *iter = 34;
    iter++;
    *iter = 12;
    iter++;
    *iter = 75;
    iter++;
    display(li);
    cout<<"size is : " <<li.size()<<endl;

    list1.sort();
    li.sort();
    // list1.merge(li);
    // display(list1);
    li.merge(list1);
    display(li);
    return 0;
}