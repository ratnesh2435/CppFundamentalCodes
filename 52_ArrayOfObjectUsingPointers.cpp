#include<iostream>
using namespace std;
class shopItem{
    int id;
    float price;
    public:
    void setData(int a, float b){
        id = a;
        price = b;
    }
    void getData(void){
        cout<<"The code of this item is "<<id<<endl<<"The price of this item is "<<price<<endl;
    }
};
int main(){
    // shopItem *ptr = new shopItem;
    // ptr->setData(3, 4);
    // ptr->getData();
    int size = 3;
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter the code of item and it's price is "<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;
}