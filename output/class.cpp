#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // only declaration
    void getData()
    {
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
        cout << "The value of c is :" << c << endl;
        cout << "The value of d is :" << d << endl;
        cout << "The value of e is :" << e << endl;
    }
};

// here setData defination out side of the class by access scop resolution (::) operator
void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee ob;
    // ob.a=100; //This is showing error beacause a is private so can't access
    ob.d = 400;
    ob.e = 500;
    ob.setData(100, 200, 300);
    ob.getData();
    // when we provide value here call then compiler give us an garbedge values
    //   ob.d = 400;
    //  ob.e = 500;

    return 0;
}