#include <iostream>
using namespace std;
int sum(int p, int q)
{
    int r = p + q;
    return r;
}
void swap(int a, int b)
{                 //   temp    a      b
    int temp = a; //    4      4      5
    a = b;        //    4      5      5
    b = temp;     //    4      5      4
}
// call by refernce pointer
void swap_Pointer(int *a, int *b)
{                  //   temp    a      b
    int temp = *a; //    4      4      5
    *a = *b;       //    4      5      5
    *b = temp;     //    4      5      4
}
// call by refernce by c++ reference variable
void swapReferenceVar(int &k, int &l)
{                 //   temp    a      b
    int temp = k; //    4      4      5
    k = l;        //    4      5      5
    k = temp;     //    4      5      4
}
int &swapReferenceVarChange(int &v, int &u)
{                 //   temp    a      b
    int temp = v; //    4      4      5
    v = u;        //    4      5      5
    u = temp;     //    4      5      4
    return v;
}

int main()
{
    int x = 6, y = 5;
    cout << "the sum of values is " << sum(4, 5) << endl; // this is called function call by value
    cout << "the value of x is " << x << "the value of y is " << y << endl;
    swap(x, y); // this is not work on swaping
    cout << "the value of x is " << x << "the value of y is " << y << endl;
    swap_Pointer(&x, &y); // this will accept swapping by the pointer
    cout << "the value of x is " << x << endl
         << "the value of y is " << y << endl;

    swapReferenceVar(x, y); // this will accept by reference variable
    cout << "the value of x is " << x << endl
         << "the value of y is " << y;
    int c = 10, d = 20;
    swapReferenceVarChange(c, d) = 66; // this is  change value of a accept by reference variable
    cout << "the value of c is " << c << "the value of d is " << d << endl;

    return 0;
}