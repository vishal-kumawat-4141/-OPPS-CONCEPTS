#include <iostream>
using namespace std;

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
class B1
{
    int data1;

public:
    B1(int d1)
    {
        data1 = d1;
        cout << "Class B1 constructor called ." << endl;
    }
    void print_data_B1()
    {
        cout << "The value of data1 is : " << data1 << endl;
    }
};
class B2
{
    int data2;

public:
    B2(int d2)
    {
        data2 = d2;
        cout << "Class B2 constructor called ." << endl;
    }
    void print_data_B2()
    {
        cout << "The value of data2 is : " << data2 << endl;
    }
};

class D : public B1, public B2
{
    int d1, d2;

public:
    D(int a, int b, int c, int d) : B1(a), B2(b)
    {
        d1 = c;
        d2 = d;
        cout << "Class D constructor is called ." << endl;
    }
    void print_data_D()
    {
        cout << "The value of d1 is : " << d1 << endl;
        cout << "The value of d2 is : " << d2 << endl;
    }
};

int main()
{
    D od(10, 20, 30, 40);
    od.print_data_B1();
    od.print_data_B2();
    od.print_data_D();

    return 0;
}