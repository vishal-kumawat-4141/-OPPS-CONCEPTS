#include <iostream>
using namespace std;
class Employee
{
    int id;
    // This id static variable
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    // This is static function
    static void getCount(void)
    {
        cout << "The number of employee id is " << count;
    }
};
// This is static data member
int Employee::count; // default count value is zero

int main()
{
    Employee rahul, vinit, kamal;
    rahul.setData();
    rahul.getData();
    Employee::getCount();

    vinit.setData();
    vinit.getData();
    Employee::getCount();

    kamal.setData();
    kamal.getData();
    Employee::getCount();

    return 0;
}
