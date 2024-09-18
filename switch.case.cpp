#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "this is tutorial for switch case" << endl;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "your age is 18" << endl;
        break;

    case 20:
        cout << "your age is 20" << endl;
        break;

    case 24:
        cout << "your age is 24" << endl;
        break;

    default:
        cout << "no";
        break;
    }
    cout << "done";
    return 0;
}