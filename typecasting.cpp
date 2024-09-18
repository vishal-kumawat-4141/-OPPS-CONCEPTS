#include <iostream>
using namespace std;
int main()
{

    // Typecasting :--> is the process of converting one datatype to another
    int a = 34;
    float b = 16.51;
    cout << "value a " << a << endl;
    cout << "The value of a is :" << float(a) << endl;

    cout << " value  b  :" << b << endl;
    cout << "The value of b is :" << int(b) << endl;

    cout << "value of expretion a+b is : " << a + b << endl;
    cout << "value of expretion a+int(b) is : " << a + int(b) << endl;
    cout << "value of expretion a+(int)b is : " << a + (int)b << endl;
    return 0;
}