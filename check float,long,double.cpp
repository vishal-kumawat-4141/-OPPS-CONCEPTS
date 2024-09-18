#include <iostream>

using namespace std;
int main()
{
    // by using f/F we denoting the value is float
    float a = 34.4f;
    // by using l/L we denoting the value is long double
    long double e = 34.4l;
    cout << "The value of a is :" << a << endl
         << "The value of e is :" << e << endl;
    cout << "The size of the 34.4 value is :" << sizeof(32.4) << endl;   // by default size is double
    cout << "The size of the 34.4f value is :" << sizeof(32.4f) << endl; // by f size of is float
    cout << "The size of the 34.4F value is :" << sizeof(32.4F) << endl; // by F size of is float
    cout << "The size of the 34.4l value is :" << sizeof(32.4l) << endl; // by l size of is long double
    cout << "The size of the 34.4L value is :" << sizeof(32.4L) << endl; // by L size of is long double
    return 0;
}