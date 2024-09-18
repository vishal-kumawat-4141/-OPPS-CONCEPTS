#include <iostream>
using namespace std;
class Number
{
    int n;

public:
    Number()
    {
        n = 0;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &ob1)
    {
        cout << "Copy constructor is called ----->" << endl;
        n = ob1.n;
    }

    Number(int num)
    {
        n = num;
    }

    void display()
    {
        cout << "The value of n is : " << n << endl;
    }
};
int main()
{
    Number n1, n2, n3(100), n5;
    n1.display();
    n2.display();
    n3.display();
    // copy constructor  invoked
    Number n4(n1);
    n4.display();
    // n4 should exactly resemble n1 or n2 or n3
    /*
        Number n4(n2);
        n4.display();
        Number n4(n3);
        n4.display();
    */

    n5 = n1; // copy constructor is not called

    Number n6 = n3;
    n6.display(); // copy constuctor invoked

    return 0;
}