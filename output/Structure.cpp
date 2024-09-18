#include <iostream>
using namespace std;
struct employee
{
    int id;
    char favchar;
    float salary;
};

int main()
{
    struct employee ep;
    ep.id = 13;
    ep.favchar = 'c';
    ep.salary = 14455;
    cout << "This is employee id : " << ep.id << endl;
    cout << "This is employee favchar : " << ep.favchar << endl;
    cout << "This is employee salary : " << ep.salary << endl;

    return 0;
}