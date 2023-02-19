#include<iostream>

using namespace std;

int main(){
    //cout<<"This is tutorial 9"<<endl;
    int age;
    cout<<"Tell me your age \n";
    cin>> age;
    // Selection control structure: if else-if else ladder
    // if (age<18 || age>100){
    //     cout<<"You cann't come to my party"<<endl;
    // }
    // else if (age == 18)
    // {
    //      cout<<"You are a kid and you will get a kid pass to the party"<<endl;

    // }else{
    //     cout<<"You can come to my party"<<endl;
    // }

    // selection control structure: Switch case statements
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;
    
    default:
        cout<<"No special cases"<<endl;
        break;
    }
    cout<<"Done with switch case"<<endl;
    return 0;
}
