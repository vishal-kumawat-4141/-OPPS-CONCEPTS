#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 11000;
        cout << "Enter the employee id : " << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The employee id is :--> " << id << endl;
    }
};
int main()
{
    Employee fb[5];
    for (int i = 1; i <= 5; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}