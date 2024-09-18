#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemprice[100];
    int count;

public:
    void initcount(void) { count = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter the itemId " << count + 1 << endl;
    cin >> itemId[count];
    cout << "Enter the itemprice  " << endl;
    cin >> itemprice[count];
    count++;
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "The price of item with Id  " << itemId[i] << "  is  " << itemprice[i] << endl;
    }
}

int main()
{
    shop shall;
    shall.initcount();
    shall.setPrice();
    shall.setPrice();
    shall.setPrice();
    shall.setPrice();
    shall.setPrice();
    shall.displayPrice();
    return 0;
}