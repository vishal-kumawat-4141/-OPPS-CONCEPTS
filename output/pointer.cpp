#include <iostream>
using namespace std;

int main()
{
    // What is pointer?:->>Data type which is holds the address of another data types
    int a = 6;
    int *b = &a;
    //&--> Address of operator
    cout << "The address of a is " << &a << endl;
    cout << "The address  of a is " << b << endl;

    //*---> (value of/at) Dereference operator
    cout << "The value at address value_at(b)  is " << *b << endl;

    // Pointer to Pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address value_at(c) is " << *c << endl;
    cout << "The value at address value_at(value_at (c))  is " << **c << endl;

    return 0;
}