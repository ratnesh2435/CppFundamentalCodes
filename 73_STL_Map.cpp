#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["ram"] = 89;
    marksMap["sham"] = 80;
    marksMap["ghanshyam"] = 78;

    marksMap.insert({{"mohan", 88},  {"manohar", 99}});
    map<string, int> :: iterator iter;
    for (iter= marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    return 0 ;
}