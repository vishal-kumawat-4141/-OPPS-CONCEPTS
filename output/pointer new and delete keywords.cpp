#include <iostream>
using namespace std;

int main()
{

    int *p = new int(191);
    cout << "The value of address P is " << *p << endl;
    float *q = new float(190.50);
    cout << "The value of address q is " << *q << endl;
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr; // This is free the contigious memory and value of arr not to come's right
    cout << "The value of ar[0] is :" << arr[0] << endl;
    cout << "The value of ar[1] is :" << arr[1] << endl;
    cout << "The value of ar[2] is :" << arr[2] << endl;

    return 0;
}