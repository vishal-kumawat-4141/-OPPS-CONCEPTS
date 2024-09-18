#include <iostream>
using namespace std;
class B1
{
public:
    void massage()
    {
        cout << "Hii,how are you ?" << endl;
    }
};
class B2
{
public:
    void massage()
    {
        cout << "I am fine." << endl;
    }
};

class D : public B1, public B2
{
public:
    void massage()
    {
        B1::massage();
    }
};

int main()
{
    B1 ob1;
    ob1.massage();
    B2 ob2;
    ob2.massage();

    D od;
    od.display(); // it work on D class massage function then call B1 massage function

    return 0;
}