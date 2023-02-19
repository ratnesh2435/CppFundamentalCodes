#include<iostream> 

using namespace std; 

int main(){

    int marks[] = {33,44,55,66};

    int mathmarks[4];

     mathmarks[0] = 234;
     mathmarks[1] = 34;
     mathmarks[2] = 4;
     mathmarks[3] = 2324;

    cout<<"These are the mathmarks:"<<endl;

    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    //You can change the value of an array
    marks[2] = 456;
    cout<<"These are the marks:"<<endl;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    // Use to input the value of array elements
    // ************************************************************************
        // for (int i = 0; i <= 4; i++)
    // {
    //     cout<<"Enter the value of"<<i<<":"<<" ";
    //     cin>>a[i];
    //     cout<<endl;
    // }
    // ************************************************************************
    // for (int i = 0; i < 4; i++)
    //     {
    //         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     }

    // int i = 0;
    // while (i<4)
    // {
    //                 cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //                 i++;

    // }

    // int i = 0;
    // do
    // {
    //                 cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //                 i++;

    // }while (i<4);


    //Pointer and arrays
    int* p = marks;
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;
    cout<<"The value of *(p) "<<*(p)<<endl;
    cout<<"The value of *(p+1) "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) "<<*(p+3)<<endl;
    
    return 0;
}