#include <iostream>
using namespace std;
class Sum
{
    int a, b;

public:
    // Constructor overloading is the constructors name is same but arguments are
    //  different so that overload the other constructor function
    Sum()
    {
        a = 0;
        b = 0;
    }
    Sum(int x, int y)
    {
        a = x;
        b = y;
    }
    Sum(int x)
    {
        a = x;
        b = 0;
    }
    void display()
    {
        cout << "The sum is :" << a + b << endl;
    }
};
int main()
{
    Sum ob1(4, 6);
    ob1.display();

    Sum ob2(5);
    ob2.display();

    Sum ob3;
    ob3.display();

    return 0;
}