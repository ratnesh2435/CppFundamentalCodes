// #include<iostream>
// #include<fstream>
// using namespace std;
// /*
// The useful classes for working with files in C++ are:
// 1. fstreamBase
// 2. ifstream --> Derived from fstreamBase
// 3. ofstream --> Derived from fstreamBase

// In order work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class
// */
// int main(){
//     string st = "Harry bhai teaching to ratnesh bhai";
//     string st2;
//     // Opening files using constructor and writing it
//     ofstream out("sample.txt"); // Writing operation
//     out<<st;

//     // Opening files using constructor and reading it
//     ifstream in("sample.txt");  // Reading operation
//     // getline(in, st2);   //for printing full line
//     in>>st2;
//     cout<<st2;
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     // connecting our file with fout stream
//     ofstream fout("sample.txt");

//     // Creating a name string and filling st with the string entered by the user
//     string name;
//     cout<<"Enter your name : "<<endl;
//     cin>>name;

//     // Writing a string to the file
//     fout<<"my name is " + name<<endl;
//     fout.close();

//     ifstream fin("sample.txt");
//     string content;
//     fin>>content;
//     cout<<"The content of this file start's with : "<<content<<endl;
//     fin.close();
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;

// int main(){
//     ofstream fout;
//     fout.open("sample.txt");
//     fout<<"This is me"<<endl;
//     fout<<"This is also me"<<endl;
//     fout<<"This is me also"<<endl;
//     fout<<"This is alsi me"<<endl;
//     fout.close();

//     ifstream fin;
//     string st, st2;
//     fin.open("sample.txt");
//     // fin>>st>>st2;
//     // cout<<st<<st2;
//     while (fin.eof() == 0)
//     {
//         getline(fin, st);
//         cout<<st<<endl;
//     }
//     fin.close();
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string st;
    // // string st = "Ratnesh keep yourself one step ahead";
    cout<<"Enter the string: "<<endl;
    cin>>st;
    ofstream fout("sample.txt");
    // fout.open("sample.txt");
    fout<<st;
    fout.close();

    ifstream fin("sample.txt");
    // fin.open("sample.txt");
    // fin>>st;
    while (fin.eof() == 0)
    {
        getline(fin, st);
        cout << st<<endl;
    }

    fin.close();
    return 0;
}
