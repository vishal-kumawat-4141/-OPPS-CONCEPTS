#include <iostream>
using namespace std;

class Y;

class X
{
    int data;

public:
    void setData(int value)
    {

        data = value;
    }
    friend void addData(X, Y);
};

class Y
{
    int num;

public:
    void setData(int value)
    {

        num = value;
    }
    friend void addData(X, Y);
};

void addData(X o1, Y o2)
{
    cout << "The sum of value by the object of  X and Y " << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    a1.setData(5);
    Y b1;
    b1.setData(6);
    addData(a1, b1);

    return 0;
}