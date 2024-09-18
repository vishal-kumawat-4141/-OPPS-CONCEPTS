#include <iostream>
using namespace std;
int c = 45789;

int main()
{
    int a, b, c;
    cout << "Enter the value of a :" << endl;
    cin >> a;
    cout << "Enter the value of b :" << endl;
    cin >> b;
    c = a + b;
    cout << "The sum of a and b is " << c << endl;
    //  by using scop resolution operator(::) we can access the global variable
    cout << "the value of c is :" << ::c;

    return 0;
}



