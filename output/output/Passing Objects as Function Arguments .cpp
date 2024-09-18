#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    void setData(int p, int q)
    {
        a = p;
        b = q;
    }
    // passing objects as function arguments
    void setDataBySum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printData()
    {
        cout << "The complex number is " << a << " + "
             << "i" << b << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setData(2, 3);
    c1.printData();

    c2.setData(3, 5);
    c2.printData();

    c3.setDataBySum(c1, c2);
    c3.printData();

    return 0;
}