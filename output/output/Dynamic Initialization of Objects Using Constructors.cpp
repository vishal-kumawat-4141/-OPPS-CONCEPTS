#include <iostream>
using namespace std;
class Bank
{
    int principle;
    int year;
    float irate;
    float rvalue;

public:
    Bank() {}
    Bank(int p, int y, float r);
    Bank(int p, int y, int r);
    void show();
};

Bank::Bank(int p, int y, float r)
{
    principle = p;
    year = y;
    irate = r;
    rvalue = principle;
    for (int i = 1; i <= y; i++)
    {
        rvalue = rvalue * (1 + irate);
    }
}

Bank::Bank(int p, int y, int r)
{
    principle = p;
    year = y;
    irate = float(r) / 100;
    rvalue = principle;
    for (int i = 0; i < y; i++)
    {
        rvalue = rvalue * (1 + irate);
    }
}

void Bank::show()
{
    cout << "The principle amount was " << principle
         << " after the  " << year << " years rvalue is " << rvalue << endl;
}

int main()
{
    int p;
    int y;
    float r;
    int R;
    Bank b1, b2, b3;

    cout << "Enter the value of principle ,year and rate" << endl;
    cin >> p >> y >> r;
    b1 = Bank(p, y, r);
    b1.show();

    cout << "Enter the value of principle ,year and rate" << endl;
    cin >> p >> y >> R;
    b2 = Bank(p, y, R);
    b2.show();

    b3.show();
    return 0;
}