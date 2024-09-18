#include <iostream>
using namespace std;
class Intro
{
public:
    void say()
    {
        cout << "My Name is vishal kumawat ." << endl;
    }
};

class Derived : public Intro
{
public:
    void say()
    {
        cout << "My Name is Siddarth kumawat ." << endl;
    }
};
int main()
{
    Derived od;
    od.say(); // IN this case class Intro's function say is overried by the Derived class say function

    return 0;
}