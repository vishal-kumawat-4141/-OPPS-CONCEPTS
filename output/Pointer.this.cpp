#include <iostream>
using namespace std;
class A
{
    int a;

public:
    //    A &setData(int a){
    void setData(int a)
    {

        this->a = a;
        //    return *this;
    }
    void getData()
    {
        cout << "The value of a is : " << a << endl;
    }
};
int main()
{
    /*
    “this” is a keyword that is an implicit pointer.
     “this” pointer points to the object which calls the member function.
     */
    A a;
    a.setData(8);
    a.getData();
    // a.setData(8).getData();

    return 0;
}