#include <iostream>
using namespace std;
class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The code of this item is : " << id << endl;
        cout << "The price of this item is : " << price << endl;
    }
};

int main()
{
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrtemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "The id and price of item : " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item Number :" << i + 1 << endl;
        ptrtemp->getData();
        ptrtemp++;
    }

    return 0;
}