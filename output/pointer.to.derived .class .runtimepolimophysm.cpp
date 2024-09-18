#include <iostream>
using namespace std;
class Base
{
public:
    int b1;
    void display()
    {
        cout << "The value of Base class b1 is " << b1 << endl;
    }
};
class Derived : public Base
{
public:
    int d1;
    void display()
    {
        cout << "The value of Base class  b1 is " << b1 << endl;
        cout << "The value of derived class d1 is " << d1 << endl;
    }
};

int main()
{
    Base *ptr_b;
    Base ob;
    ptr_b = &ob;
    ptr_b->b1 = 100;
    ptr_b->display();

    Derived od;
    ptr_b = &od; // pointing base class pointer to derived class
    ptr_b->b1 = 200;
    ptr_b->display();
    // ptr_b->d1=1100;  //throw the error

    Derived *ptr_d;
    ptr_d = &od;
    ptr_d->b1 = 1001;
    ptr_d->d1 = 1111;
    ptr_d->display();

    return 0;
}