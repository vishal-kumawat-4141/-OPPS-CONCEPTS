#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;

public:
    int data1()
    {
        return a = 5;
    }
    int data2()
    {
        return b = 7;
    }
};
/*


                           Public Derivation      	Private Derivation    	Protected Derivation

Private members           	Not Inherited           	Not Inherited         	Not Inherited

Protected members           	Protected               	Private              Protected

Public members           	Public	Private                Protected              protected

*/

class Derived : protected Base
{
public:
    void display()
    {
        cout << "The value of a : " << data1() << endl;
        cout << "The value of b : " << data2() << endl;
    }
};

int main()
{
    Base b;
    Derived d;
    // cout<<b.a;  //cannot be access a is protected at both class
    // cout<<d.a;
    b.data1();
    b.data2();
    d.display();

    return 0;
}