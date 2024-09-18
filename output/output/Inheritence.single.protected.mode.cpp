#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
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
    void data()
    {
        cout << "Enter the number  " << endl;
        cin >> a;
    }
    void display()
    {
        cout << "The value of a is : " << a << endl;
    }
};

int main()
{
    Derived d;
    // cout<<b.a;  //cannot be access a is protected at both class
    // cout<<d.a;
    d.data();
    d.display();

    return 0;
}