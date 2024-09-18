#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the value of num1:\n"; /*'<<' is the Insertion operator*/
    cin >> num1;                          /*'>>' is the Extraction operator*/

    cout << "Enter the value of num2:\n"; /*'<<' is the Insertion operator*/
    cin >> num2;                          /*'>>' is the Extraction operator*/
    cout << "The sum of num1 and num2 is :" << num1 + num2;
    return 0;
}