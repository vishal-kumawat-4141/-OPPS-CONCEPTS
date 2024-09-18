#include <iostream>
using namespace std;

// Base Class
class Employee
{
    int id;

public:
    float salary;
    int rank;

    Employee(int e_id, int e_rank)
    {
        id = e_id;
        salary = 1000.0;
        rank = e_rank;
    }
    Employee() {}
};
// Creating a Programmer class derived from Employee Base class
// by default visibility mode is private
class Programmer : Employee
{
public:
    int code;
    Programmer(int em_rank)
    {
        rank = em_rank;
        code = 9;
    }
    void getData()
    {
        cout << "\n The rank is " << rank << endl
             << "The code is " << code << endl;
    }
};
int main()
{
    Employee rahul(1, 1001), kamal(2, 1002), vinit(3, 1003), dinesh(4, 1004);
    // cannot be access beacaude id is private data member of class Employee
    //  cout<<rahul.id;
    cout << "salary"
         << "   "
         << "rank" << endl;
    cout << rahul.salary << "    " << rahul.rank << endl;
    cout << kamal.salary << "    " << kamal.rank << endl;
    cout << vinit.salary << "    " << vinit.rank << endl;
    cout << dinesh.salary << "    " << dinesh.rank << endl;

    Programmer rohit(1005);
    cout << rohit.code;
    rohit.getData();

    return 0;
}
/*
Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited
*/