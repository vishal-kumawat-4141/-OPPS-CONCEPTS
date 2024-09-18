#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created

    Complex(void); // construction decleration
    void dispay()
    {
        cout << "The value of complex is " << a << " + " << b << "i" << endl;
    }
};

// ----> This is a default constructor as it takes no parameters
Complex ::Complex(void)
{
    a = 10;
    b = 20;
}
int main()
{
    Complex c1, c2, c3, c4;
    c1.dispay();
    c2.dispay();
    c3.dispay();
    c4.dispay();

    return 0;
}

/*
Important Characteristics of Constructors in C++

1. A constructor should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address
*/