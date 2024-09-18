#include <iostream>
using namespace std;
class A
{
protected:
    int data1;

public:
    void set_data1(int a)
    {
        data1 = a;
    }
};
class B
{
protected:
    int data2;

public:
    void set_data2(int a)
    {
        data2 = a;
    }
};

/*class derived_class_name : visibility_mode base_1 ,visibility_mode base_2{

body of derived class
}
*/

class Sum : public A, public B
{
public:
    void show()
    {
        cout << "The value of data1 is " << data1 << endl;
        cout << "The value of data2 is " << data2 << endl;
        cout << "sum of values " << data1 + data2 << endl;
    }
};
int main()
{
    Sum s;
    s.set_data1(15);
    s.set_data2(20);
    s.show();
    return 0;
}