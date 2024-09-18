#include <iostream>
using namespace std;
class Complex
{
    int r, i;

public:
    void setData(int a, int b)
    {
        r = a;
        i = b;
    }
    void getData()
    {
        cout << "The value of real part is :" << r << endl;
        cout << "The value of imagenary part is :" << i << endl;
    }
};
int main()
{
    Complex c1;
    c1.setData(1, 9);
    c1.getData();

    // object by pointer
    Complex *ptr1 = &c1;
    (*ptr1).setData(8, 15);
    (*ptr1).getData();

    // object by new keyword with pointer
    Complex *ptr2 = new Complex;
    (*ptr2).setData(10, 30);
    (*ptr2).getData();

    // object by new keyword with pointer
    Complex *ptr3 = new Complex;
    ptr3->setData(50, 100); // arrow operator for object pointer
    ptr3->getData();

    // Array of objects 
    Complex *ptr4 = new Complex[4];
    ptr4->setData(200, 300); // arrow operator for object pointer
    ptr4->getData();
    return 0;
}